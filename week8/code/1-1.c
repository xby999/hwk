#include <stdio.h>
#include <malloc.h>

void print(char *, int);

int main()
{
	char *s1 = "abcde";      //"abcde"作为字符串常量存储在常量区 s1,s2,s5 拥有相同的地址
	char *s2 = "abcde"; 
	char s3[] = "abcd";
	long int *s4[100];
	char *s5 = "abcde";
	int a = 5;
	int b = 6;

	printf("variables address in main function: s1=%p s2=%p s3=%p s4=%p s5=%p a=%p b=%p  \n",
	s1,s2,s3,s4,s5,&a,&b);

	printf("variables address in processcall:n");
	print("ddddddddddd",5);  //参数入栈从右至左 p先进栈 str后进 &p>&str
	printf("main=%p   print=%p \n",main,print);
}

void print(char *str, int p)
{
	char *s1 = "abcde";      //abcde在常量区，s1在栈上
	char *s2 = "abcde";      //abcde在常量区，s2在栈上  s1-s2=6可能等于0编译器优化了相同的变量，只在内存保存一份
	//而&s1>&s2
	char s3[] = "abcdeee";
	long int *s4[100];
	char *s5 = "abcde"; 
	int a = 5;
	int b = 6;
	int c;
	int d;
	char *q = str;
	int m = p;
	char *r = (char *)malloc(1);
	char *w = (char *)malloc(1);
	printf("s1=%p s2=%p s3=%p s4=%p s5=%p a=%p b=%p  c=%p d=%p str=%p q=%p p=%p m=%p r=%p w=%p \n",
	s1,s2,s3,s4,s5,&a,&b,&c,&d,&str,q,&p,&m,r,w);
}
