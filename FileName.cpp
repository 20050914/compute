#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
void add(float x, float y)
{
	printf("%.2f+%.2f=%.2f\n", x, y, x + y);
}
void sub(float x, float y)
{
	printf("%.2f-%.2f=%.2f",x ,y, x - y);
}
void mul(float x, float y)
{
	printf("%.2f*%.2f=%.2f", x, y, x * y);
}
void div(float x,float y)
{
	printf("%.2f/%.2f=%.2f", x, y, x / y);
}
int main()
{
	float x, y;
	char r;
	while (1)
	{
		printf("请输入你要计算的式子：");
		scanf("%f%c%f", &x, &r, &y);
		switch (r)
		{
		case '+':add(x, y); break;
		case '-':sub(x, y); break;
		case '*':mul(x, y); break;
		case '/':div(x, y); break;
		defatlt:printf("输入错误！\n");
		}
	}
	return 0;
}