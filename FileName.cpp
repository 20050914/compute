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
		printf("��������Ҫ�����ʽ�ӣ�");
		scanf("%f%c%f", &x, &r, &y);
		switch (r)
		{
		case '+':add(x, y); break;
		case '-':sub(x, y); break;
		case '*':mul(x, y); break;
		case '/':div(x, y); break;
		defatlt:printf("�������\n");
		}
	}
	return 0;
}