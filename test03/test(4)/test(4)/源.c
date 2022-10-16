#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d*%d=%d\n", j, i,j*i);
		}
		printf("\n");
	}
}