#include<stdio.h>
int main()
{
	int a, b, i,sum,count;
	sum = 0;
	count = 0;
	FILE *in,* out;
	in = fopen("input.txt", "r");
	out = fopen("output.txt", "w");
	fscanf(in, "%d%d", &a, &b);
	if (a > b)
	{
		for (i = b;i <= a;i++)
		{
			sum =+(sum+(count+b));
			count++;
		}
	}
	else
	{
		for (i = a;i <= b;i++)
		{
			sum = +(sum+(count + a));
			count++;
		}
	}
	printf("%d", sum);
	fprintf(out,"%d %d",a,b);
	fclose(in);
	fclose(out);
	return 0;

}