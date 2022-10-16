#include<stdio.h>
#include<Windows.h>
#include<conio.h>
int main()
{
	int arr[5][5] = {
		1,1,1,1,1,
		1,0,0,0,1,
		1,0,2,3,1,
		1,1,1,1,1
	};
	int x = 0, y = 0;
	while (1)
	{
		system("cls");
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (arr[i][j] == 2)
					x = i;
				    y = j;
			}
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				printf("%d\t", arr[i][j]);
			}
			printf("\n");
		}
	}
	switch (_getch())
	{
	case 's':
		if (arr[x + 1][y] == 0)
		{
			arr[x + 1][y] += 2;
			arr[x][y] -= 2;
			break;
		}

	}
	return 0;
}