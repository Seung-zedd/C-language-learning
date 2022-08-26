#include <stdio.h>

int main_array(void)
{
	//여러 개의 변수를 함께, 동시에 생성
	int subway_array[3]; //크기가 3인 배열
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호선에 %d명이 타고 있습니다\n", i + 1, subway_array[i]);
	}

	//값 설정 방법
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //배열 초기화를 하지않으면 쓰레기값 들어감.
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	//배열 크기는 항상 상수로 선언
	int size = 10;
	int arr[10];

	//3번째 값부터는 자동으로 '0'으로 초기화 됨
	int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++)
		{
			printf("%d\n", arr[i]); // 1,2,0,0,0,0,0,0,0,0
		}

	//int arr[] = {1,2}; //arr[2]

	float arr_f[5] = { 1.0, 2.0, 3.0 };
	for (int i = 0; i < 5; i++)
		{
			printf("%.2f\n", arr_f[i]);// 1.00, 2.00, 3.00, 0.00, 0.00
		}


	return 0;
}