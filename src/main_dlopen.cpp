#include <iostream>
#include "ntclass.h"

#include <dlfcn.h>
#include <stdlib.h>

using namespace std;

int main()
{
  void *handleA = dlopen("./libntclass.so", RTLD_NOW);
  void *handleB = dlopen("./libntclass.so", RTLD_NOW);

  if (handleA == NULL || handleB == NULL)
  {
     cerr << dlerror() << endl;
     exit(-1);
  }

  create_t *createA = (create_t*) dlsym(handleA, "create");
  create_t *createB = (create_t*) dlsym(handleB, "create");

  destroy_t *destroyA = (destroy_t*) dlsym(handleA, "destroy");
  destroy_t *destroyB = (destroy_t*) dlsym(handleB, "destroy");

  ntclass *A = createA();
  ntclass *B = createB();

  A->init("A");
  B->init("B");

  A->print();
  B->print();

  destroyA(A);
  destroyB(B);

  dlclose(handleA);
  dlclose(handleB);

  return 0;
}

