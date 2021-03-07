#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//데이터형식지정
struct DATA
{
	char name[15];
	char tel[15];
	char addr[15];
}x, y, z;

struct DATA input()
{
	scanf("%s%s%s", x.name, x.tel, x.addr);
	scanf("%s%s%s", y.name, y.tel, y.addr);
	scanf("%s%s%s", z.name, z.tel, z.addr);
	return x, y, z;
};

//네임의 첫글자를 비교해서 가장 큰 ASCII가 t로오도록 strcpy
struct DATA dict(DATA& x, DATA& y, DATA& z)
{
	struct DATA t;
	strcpy(t.name, x.name);
	strcpy(t.tel, x.tel);
	strcpy(t.addr, x.addr);
	if (strcmp(y.name, t.name) < 0) t = y;
	if (strcmp(z.name, t.name) < 0) t = z;
	printf("name: %s\ntel : %s\naddr : %s\n", t.name, t.tel, t.addr);
	return t;
};


int main()
{
	//값받기
	input();
	//비교후 출력
	dict(x, y, z);
	  system("pause");

	return 0;
}
