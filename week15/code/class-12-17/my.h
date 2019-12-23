#include <sys/wait.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>
#include <sys/param.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <pthread.h>
#include <assert.h>
#include <limits.h>
#define NUM 4
#define LOOP 10000000
#define TN 100
#define WRITER_FIRST 

