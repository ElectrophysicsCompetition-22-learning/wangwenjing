#include<stdio.h>
void seven(int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	seven(22, 44);
}