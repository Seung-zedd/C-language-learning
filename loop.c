#include <stdio.h>

int main_loop(void)
{	//for(����; ����; ����)
	/*for (int i = 0; i < 10; i++)
	{
		printf("Hello, world %d\n", i);
	}*/

	//while(����) {  }
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
	}*/

	// do {  }  while (����)
	/*int i = 1;
	do
	{
		printf("Hello World %d\n", i++);
	}

	while (i <= 10);*/

	// 2�� �ݺ������� ������ �����
	/*for (int i = 2; i < 10; i++)
	{
		printf("%d�� ���\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}*/

	//�� �ױ�

	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}*/

	//�Ųٷ� �� �ױ�(���:������ �Ʒ��� ������� �����ϱ� ������, j�� ������ k�� �Ѿ)
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
			for (int k = 0; k <= i; k++)
			{
				printf("*");
			}
		printf("\n");
	}
}