#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int arr[10] = {0};
	int MaxSize = 10;
	int len = 0;
	int x ;
while (1)
{
	scanf_s("%d", &x);
	switch(x)
	{ 
	case 1:
		if (len >= MaxSize)
		{
			printf("�����Ѿ����ˣ������ٷ�����\n");
			break;
		}
		printf("''������һ����������ŵ�arrϵͳ��\n");
		int num;
		scanf_s("%d",&num);
		arr[len] = num;
		len++;
		break;
	case 2:
		printf("----------\n");
		printf("��ǰ�����Ѿ��洢������\n");
		for (int i = 0; i < len; i++)
		{
			printf("%d\n", arr[i]);
		}
		printf("----------\n");
		break;
	case 3:
		return 0;
		break;
	}
}
}