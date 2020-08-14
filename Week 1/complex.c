#include<stdio.h>
typedef struct complex
{
	int real,imag;
}complex;
complex add(complex c1,complex c2)
{
	complex c3;
	c3.real=c1.real+c2.real;
	c3.imag=c1.imag+c2.imag;
	return c3;
}
int main( )
{
	struct complex c1,c2,c3;
	scanf("%d%d",&c1.real,&c1.imag);
	scanf("%d%d",&c2.real,&c2.imag);
	c3 = add(c1,c2);
	printf("addition of two complex numbers=%d+i%d",c3.real,c3.imag);
	return 0;
}


