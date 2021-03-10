#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//inttial data format
struct data
{
	char name[20];
	int num;
	int s1;
	int s2;
	int s3;
	int sum;
}c[20], o = {0};


//input
int main()
{
	//입력에 씀
	int i, max, p;
	//비교구문에 씀
	int n, t, index, maxindex;
	//repeattimeinput
	scanf("%d", &max);
	for (i = 1;i <= max;i++)
		//nameinput
	{
		scanf("%s", c[i].name);
		//numbersetting
		c[i].num = i;
		//sninput
		scanf("%d", &c[i].s1);
		scanf("%d", &c[i].s2);
		scanf("%d", &c[i].s3);
		//sumsetting
		c[i].sum = (c[i].s1 + c[i].s2 + c[i].s3);
	}

	t = 0;
	for (n = 1;n < max;n++)
	{
		for (index = 0;index < max-1;index++)
		{
			if (c[index].sum > c[index + 1].sum)
			{
				o = c[n];
				t=c[n].sum;

				c[n] = c[n + 1];
				c[n].sum = c[n + 1].sum;

				c[n + 1] = o;
				c[n+1].sum= t;


			}
		}

	}


	for (p = max;p >=1;p--)
	{
		printf("%s %d %d %d %d\n", c[p].name, c[p].s1, c[p].s2, c[p].s3, c[p].sum);
	}
	return 0;
}
