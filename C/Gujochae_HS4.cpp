#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//데이터형식지정
struct DATA 
{
	int h;
	double w;
}a,b,c;

struct DATA input()
{
	scanf("%d%lf", b.h, b.w);
	scanf("%d%lf", c.h, c.w);
	return b,c;
};

//네임의 첫글자를 비교해서 가장 큰 ASCII가 t로오도록 strcpy
struct DATA calc(DATA& b, DATA& c)
{
	a.h=((b.h+c.h)/2);
	a.w+((b.h+c.h)/2);
	printf("height : %dcm\nweight : %f.1kg");
	return a;
};


int main()
{
	//값받기
	input();
	//비교후 출력
	calc(b,c);
	  system("pause");

	return 0;
}
