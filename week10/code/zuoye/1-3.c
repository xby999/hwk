#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void foo()
{
	fprintf(stdree,"foo says bye.\n");
}

void bar()
{
	fprintf(stdree,"bar says bye.\n");
}

int main()
{
	atexit(foo);
	atexit(bar);
	fprintf(stdout,"Oops~~~~~~~~~forgot a newline");
	sleep(2);
	if(argc>l&&strcmp(argv[1],"exit")==0)
		exit(0);
	if(argc>l&&strcmp(argv[1],"_exit")==0)
		_exit(0);
	return 0;
}
