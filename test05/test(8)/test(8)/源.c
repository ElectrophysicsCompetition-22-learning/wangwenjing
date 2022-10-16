#include<stdio.h>
#define _CRE_SECURE_NO_WARNINGS
int main()
{
	int arr[5][5] = {
		1,1,1,1,1,
		1,0,0,0,1,
		1,0,2,3,1,
		1,1,1,1,1,};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\n",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
