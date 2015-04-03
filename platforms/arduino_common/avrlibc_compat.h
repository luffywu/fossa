/*
 * Copyright (c) 2015 Cesanta Software Limited
 * All rights reserved
 */

#ifndef AVRLIBC_COMPAT_HEADER_INCLUDED
#define AVRLIBC_COMPAT_HEADER_INCLUDED

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

/* fossa requires to64, so define it' instead of strtol & co */
long long int to64(const char* str);

char* strerror(int errnum);

/* Time declaration & functions */
typedef unsigned long time_t;

struct timeval {
  long tv_sec;
  long tv_usec;
};

time_t time(time_t* timer);

/* TODO(alashkin): add (at least) in-flash "files" operations */

#define AVR_NOFS
#define AVR_LIBC

#endif
