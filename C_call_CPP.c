#include <cstdlib>

#include "C_call_CPP.h"
#include "CPP.h"

#ifdef __cplusplus
extern "C" {
#endif

static CPP *instance = NULL;


void CPP_hello(const char *name) {
    instance = new CPP();
    instance->hello(name);
}

#ifdef __cplusplus
}
#endif
