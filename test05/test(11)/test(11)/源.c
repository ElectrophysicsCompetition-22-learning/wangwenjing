#include<stdio.h>
int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d*%d\t", i, j, i * j);
		}
		printf("\n");
	}
	return 0;

}