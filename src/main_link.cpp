#include <iostream>
#include "ntclass.h"

using namespace std;

int main()
{
  ntclass A, B;
  A.init("A");
  B.init("B");

  A.print();
  B.print();

  return 0;
}

