#include <stdio.h>

void sum(unsigned int , unsigned int );

void main()
{
	unsigned int a=5,b=5;
	sum(a,b);
}

void sum(unsigned int a,unsigned int b)
{
	unsigned int c;
	c=a+b;
	printf("The sum is:%d\n",c);
}
