#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int a, n,i,j,t;
	int* p;
	scanf("%d", &n);
	p = new int[n];


	for (i = 0;i < n;i++)
	{
		scanf("%d", &p[i]);
	}

	for (i = n-1; i > 0;i--)
	{
		for (j = 0; j < i; j++)
		{
			if (p[j] < p[j+1])
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;

			}
		}
	}
	for (i = 0; i < n;i++)
	{
		printf("%d ", p[i]);
	}



	delete[]p;
	return 0;

}