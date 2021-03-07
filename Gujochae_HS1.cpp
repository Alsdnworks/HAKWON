#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct DATA
{
	char name[100];
	char tel[100];
	char addr[100];
};

int main()
{
	struct DATA input;
	scanf("%s %s %s", &input.name, &input.tel, &input.addr);
	printf("name : %s\ntel : %s\naddr : %s", input.name, input.tel, input.addr);
  system("pause");
	return 0;
}
