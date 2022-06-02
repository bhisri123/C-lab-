#include<stdio.h>
int main()
{
	int a,b,c;
	a=5,b=6;
	a=c;
	c=a;
	a=b;
	b=a;
	printf("%d",a);
	printf("%d",b);
	printf("%d",c);
	return 0;
}
