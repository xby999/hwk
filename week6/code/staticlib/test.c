#include "mylib.h"
#include<stdio.h>

int main()
{
	int n,base[100];
	printf("input n(n<=100)\n");
	scanf("%d",&n);
	
	init(base,n);
	show(base,n);

	printf("max=%d\n",max(base,n));
	printf("sum=%d\n",sum(base,n));

	return 0;
}
