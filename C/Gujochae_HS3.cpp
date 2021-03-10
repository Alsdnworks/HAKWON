#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//데이터형식지정
struct DATA
{
	int x;
	int y;
}ld1, ld2, ru1, ru2;
//
int main()
{
	struct DATA ld3 = {0,0}, ru3 = { 0,0 };
	scanf("%d%d%d%d", &ld1.x, &ld1.y, &ru1.x, &ru1.y);
	scanf("%d%d%d%d", &ld2.x, &ld2.y, &ru2.x, &ru2.y);
	//ld1,ld2는 작으면 남겨 ru는 큰걸살려
	if (ld1.x > ld2.x) {
		ld3.x = ld2.x;
	}
	else ld3.x = ld1.x;
	if (ld1.y > ld2.y) {
		ld3.y = ld2.y;
	}
	else ld3.y = ld1.y;
	if (ru1.x < ru2.x) {
		ru3.x = ru2.x;
	}
	else ru3.x = ru1.x;
	if (ru1.y < ru2.y) {
		ru3.y = ru2.y;
	}
	else ru3.y = ru1.y;
	//
	printf("%d %d %d %d", ld3.x, ld3.y, ru3.x, ru3.y);
	  system("pause");

	return 0;
}