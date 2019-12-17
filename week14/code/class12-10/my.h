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
#define check_error(return_val,msg){\
	if(return_val != 0){\
		fprintf(stderr, "%s:%s\n",msg,strerror(return_val));\
		exit(-1);\
	}\
}
