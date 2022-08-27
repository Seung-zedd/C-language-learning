#include <stdio.h>
/*
main 함수와 swap함수는 다른 메모리 영역를 사용하기 때문에 주소값을 넘겨주는 포인터 변수를 사용해서 a와 b의 값을
바꿔줘야함.
* tmp를 임시공간의 변수라고 해두자.(실제값을 불러올때도 마찬가지)
* 이미 swap_addr(int *a, int*b)를 선언했기 때문에, 따로 int *tmp를 하지 않아도됨
* 만약 swap_addr 내부에서 int *tmp를 선언하면, 예외가 발생하여 엑세스를 거부함
*/ 

void swap(int a, int b);
void swap_addr(int *a, int *b);


int main(void)
{
	int a = 10;
	int b = 20;
	printf("swap하기 전의 a의 값:%d, b의 값:%d\n", a, b);
	swap(a, b);
	printf("swap하기 후의 a의 값:%d, b의 값:%d\n", a, b);
	
	swap_addr(&a, &b);
	printf("(주소값을 넘긴)swap하기 후의 a의 값:%d, b의 값:%d\n", a, b);
	

	return 0;
}

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;

	printf("swap함수 내 a의 값:%d b의 값:%d\n", a, b);
}

void swap_addr(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	printf("(주소값을 넘긴)swap함수 내 a의 값:%d b의 값:%d\n", *a, *b);
}