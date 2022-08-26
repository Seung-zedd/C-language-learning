#include <stdio.h>
//함수를 이용한 계산기
void p(int num);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int main(void)
{
	int num = 2;
	p(num);//2

	num = add(num, 3);
	p(num); // 5

	num = sub(num, 2);
	p(num);//3

	num = mul(num, 6);
	p(num);//18

	num = div(num, 3);
	p(num);//6

	return 0;
}

void p(int num)
{
	printf("num은 %d입니다\n", num);
}
int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}