#include <stdio.h>

int main_array(void)
{
	//���� ���� ������ �Բ�, ���ÿ� ����
	int subway_array[3]; //ũ�Ⱑ 3�� �迭
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�\n", i + 1, subway_array[i]);
	}

	//�� ���� ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //�迭 �ʱ�ȭ�� ���������� �����Ⱚ ��.
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	//�迭 ũ��� �׻� ����� ����
	int size = 10;
	int arr[10];

	//3��° �����ʹ� �ڵ����� '0'���� �ʱ�ȭ ��
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