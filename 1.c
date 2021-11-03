#include<stdio.h>
void main()
{
	unsigned int a;
	signed int b;
	signed short int c;
	unsigned short int d;
	signed long int e;
	unsigned long int f;
	signed long long int g;
	unsigned long long int h;
	a=123467890;
	b=-1234567890;
	c=-12345;
	d=12345;
	e=-987654321;
	f=123459876;
	g=102030405060708090;
	h=-10203040506070809;
	printf("number of a is %u\n",a);
	printf("number of b is %d\n",b);
	printf("number of c is %hd\n",c);
	printf("number of d is %ud\n",d);
	printf("number of e is %ld\n",e);
	printf("number of f is %lu\n",f);
	printf("number of g is %lld\n",g);
	printf("number of h is %llu\n",h);
	
	
}
