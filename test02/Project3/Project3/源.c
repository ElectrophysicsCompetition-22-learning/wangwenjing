#include<stdio.h>
#define _CRT_SECURE_NO_WARNGS
void main()
{
	int max(int x, int y);
	int a, b, c;
	scanf("a=%d,b=%d", &a, &b);
	c = max(a, b);
	printf("max=%d\n", c);
	return 0;

}
int max(int x, int y);
{
	int z;
	if (x > y)z = x;
	else z = y;
	return)(z);
}