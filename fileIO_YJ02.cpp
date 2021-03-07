#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	double a[10],avg;
	FILE *in,* out;
	in = fopen(".//temp//in.txt", "r");
	out = fopen(".//temp//out.txt", "w");

		for (i = 0;i < 10;i++)
		{
			fscanf(in, "%lf", &a[i]);
		}

		avg = ((a[0] + a[9]) / 2.0);
		printf("%.1f",avg);
		fprintf(out, "%.1f", avg);

	fclose(in);
	fclose(out);
	return 0;

}