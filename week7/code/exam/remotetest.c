#include "dylib.h"
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *error;  
	void *hd;
	void(*f1)();
	hd=dlopen("../dynamiclib/libdylib.so",RTLD_LAZY);
	if(!hd)
	{	
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}
	
	f1=	dlsym(hd,"menu");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);	
	}


	while(1)
	{
		f1();
	}

	if(dlclose(hd)<0)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);	
	}
	return 0;

}
