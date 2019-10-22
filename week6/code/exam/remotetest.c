#include "dylib.h"
#include<stdio.h>
#include<dlfcn.h>
#include<stdlib.h>
int main()
{
	int n,base[100];
	printf("input n(n<=100)\n");
	scanf("%d",&n);

	//init(base,n);
	char *error;  
	void *hd;
	void(*f1)(),(*f4)();
	int (*f2)(),(*f3)();
	hd=dlopen("../dynamiclib/libdylib.so",RTLD_LAZY);
	if(!hd)
	{	
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}
	f4=	dlsym(hd,"init");
	if((error=dlerror())!=NULL){
		fprintf(stderr,"%s\n",dlerror());
exit(1);	
	}
	f1=	dlsym(hd,"show");
	if((error=dlerror())!=NULL){
		fprintf(stderr,"%s\n",dlerror());
exit(1);	
	}
	f2=	dlsym(hd,"max");
	if((error=dlerror())!=NULL){
		fprintf(stderr,"%s\n",dlerror());
exit(1);	
	}
	f3=	dlsym(hd,"sum");
	if((error=dlerror())!=NULL){
		fprintf(stderr,"%s\n",dlerror());
exit(1);	
	}
	f4(base,n);
	f1(base,n);
	
	printf("max=%d\n",f2(base,n));
	printf("sum=%d\n",f3(base,n));

	if(dlclose(hd)<0)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);	
	}
	return 0;
}
