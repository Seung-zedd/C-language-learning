#include <stdio.h>

int main_Test(void)
{	//�� �ױ�
	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}*/

	//�Ųٷ� �� �ױ�(���:������ �Ʒ��� ������� �����ϱ� ������, j�� ������ k�� �Ѿ)
	    /*
	 SSSS*
	 SSS**
	 SS***
	 S****
	 ***** 
	    */
	//for (int i = 1; i <= 5; i++)
	//{
	//	for (int j = i; j <= 5 - 1; j++)
	//	{
	//		printf("S");//S�� ����ϰ� j�� ������Ŵ
	//	}

	//	for (int k = 1; k <= i; k++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//
	//}

	//������Ʈ:�Ƕ�̵� �ױ�:2n+1�� ����, floor�� 5���̸� 2*floor +1
	/*
   SS*
   S***
   *****
  
 
	*/ 
	printf("�� ���� �װڴ���?: ");

	int floor = 0;
	scanf("%d", &floor);

	for (int i = 0; i < floor; i++) //�ٹٲ� ��
	{
		for (int j = i; j < floor - 1; j++) //S ��¿�
		{
			printf(" ");
		}

		for (int k = 0;k< 2*i + 1; k++) //���ױ� ��
		{
			printf("*");
		}
		
		printf("\n");
	
	}
		
	
}