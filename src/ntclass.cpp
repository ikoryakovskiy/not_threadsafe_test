#include "ntclass.h"
#include <stdio.h>
#include <string.h>
#include <iostream>

char *gptr = NULL;

char *ntclass::sptr = NULL;

ntclass::~ntclass()
{
  if (gptr)
  {
    delete[] gptr;
    gptr = NULL;
  }
  if (sptr)
  {
    delete[] sptr;
    sptr = NULL;
  }
  if (ptr)
  {
    delete[] ptr;
    ptr = NULL;
  }
}

void ntclass::init(const char* str)
{
  int size = strlen(str)*sizeof(char);
  gptr = new char[size];
  memcpy(gptr, str, size);
  sptr = new char[size];
  memcpy(sptr, str, size);
  ptr = new char[size];
  memcpy(ptr, str, size);
}

void ntclass::print()
{
  std::cout << "Global: " << gptr << std::endl;
  std::cout << "Static: " << sptr << std::endl;
  std::cout << "Normal: " << ptr << std::endl;
}

extern "C" ntclass *create()
{
  return new ntclass();
}

extern "C" void destroy(ntclass *p)
{
  delete p;
}
