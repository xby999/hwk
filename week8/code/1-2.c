#include <stdio.h>
#include <malloc.h>

int a;
static int  b=10;

int main(int argc,char *argv[], char *envp[])
{
	int a =10;
	char *p = (char*)malloc(sizeof(char));
	printf("a=%d,p=0x%s\n",a,p);//动态链接库,*.so
	getchar();  //设置阻塞，也可以使用sleep()函数来解决
	getchar();
	return 0;
}
