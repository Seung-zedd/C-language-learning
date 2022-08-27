#include <stdio.h>
/*
main �Լ��� swap�Լ��� �ٸ� �޸� ������ ����ϱ� ������ �ּҰ��� �Ѱ��ִ� ������ ������ ����ؼ� a�� b�� ����
�ٲ������.
* tmp�� �ӽð����� ������� �ص���.(�������� �ҷ��ö��� ��������)
* �̹� swap_addr(int *a, int*b)�� �����߱� ������, ���� int *tmp�� ���� �ʾƵ���
* ���� swap_addr ���ο��� int *tmp�� �����ϸ�, ���ܰ� �߻��Ͽ� �������� �ź���
*/ 

void swap(int a, int b);
void swap_addr(int *a, int *b);


int main(void)
{
	int a = 10;
	int b = 20;
	printf("swap�ϱ� ���� a�� ��:%d, b�� ��:%d\n", a, b);
	swap(a, b);
	printf("swap�ϱ� ���� a�� ��:%d, b�� ��:%d\n", a, b);
	
	swap_addr(&a, &b);
	printf("(�ּҰ��� �ѱ�)swap�ϱ� ���� a�� ��:%d, b�� ��:%d\n", a, b);
	

	return 0;
}

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;

	printf("swap�Լ� �� a�� ��:%d b�� ��:%d\n", a, b);
}

void swap_addr(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	printf("(�ּҰ��� �ѱ�)swap�Լ� �� a�� ��:%d b�� ��:%d\n", *a, *b);
}