#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	int* p = new int;
	int* s = new int;
	scanf("%d", p);
	scanf("%d", s);

	printf("%d + %d = %d\n",*p,*s, *p + *s);
	printf("%d - %d = %d\n",*p,*s, *p - *s);
	printf("%d * %d = %d\n",*p,*s, *p * *s);
	printf("%d / %d = %d\n",*p,*s, *p / *s);
	delete p;
	delete s;
	return 0;

}