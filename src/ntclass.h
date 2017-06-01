#ifndef NTCLASS_H
#define NTCLASS_H

#include <cstddef>

class ntclass
{
  private:
    static char *sptr;
    char *ptr;

  public:
    ntclass() : ptr(NULL) {}
    virtual ~ntclass();

    virtual void init(const char* str);

    virtual void print();
};

typedef ntclass* create_t();
typedef void destroy_t(ntclass*);


#endif // NTCLASS_H
