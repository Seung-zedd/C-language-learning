#include <time.h>
#include <stdio.h>

int main(void)
{	//if���� Ȱ���� ���� or �л�
	/*printf("���̸� �Է����ּ���: ");

	int age = 0;

	scanf("%d", &age);

	if (age >= 20)
	{
		printf("�����Դϴ�\n");
	}

	else
	{
		printf("�л��Դϴ�\n");
	}*/
	// �ʵ��л�(8-13) / ���л�(14-16) / ����л�(17-19)?
	//	if -> else if -> else ��
	/*printf("���̸� �Է����ּ���: ");

	int age = 0;

	scanf("%d", &age);

	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�\n");
	}

	else if(age>=14 && age<=16)
	{
		printf("���л��Դϴ�\n");
	}

	else if(age>=17 && age<=19)
	{
		printf("����л��Դϴ�\n");
	}

	else
	{
		printf("���� �Է� ����\n");
	}*/

	// break, continue
	/*for (int i = 1; i <= 30; i++)
	{
		if(i >= 6)
	{
			printf("�������� ���� ������\n");
			break;//���� ����� for���� Ż��(printf���� �����̸� �߰�ȣ ��������)
	}
		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n",i);
	}*/

	//1~30������ �ִ� �ݿ��� 7���� ���ļ� �Ἦ, 6~10�� ���� ������ǥ
	/*
	* break:���� ����� for���� Ż��, 
	* continue:�Ʒ��� printf���� ������� �ʰ� i++
	*/
	
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i<=10)
		{	if (i == 7)
			{
				printf("%d�� �л��� ���ļ� �Ἦ�߾��\n",i);
				continue;
			}
			printf("%d�� �л��� ������ǥ �غ� �ϼ���\n",i);
		
		}
	}*/

	// ���� 0 ���� 1 �� 2
	/*srand(time(NULL));
	int i = rand() % 3;

	switch (i)
	{
	
	case 0: printf("����\n");
		break;
	case 1: printf("����\n");
		break;
	case 2: printf("��\n");
		break;

	default:printf("�����\n");
	}*/

	// switch���� �̿� �ʵ��л�(8-13) / ���л�(14-16) / ����л�(17-19)?
	
	
	srand(time(NULL));
	int age= rand() % 12 + 8; //8~19
	
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("�ʵ��л��Դϴ�\n"); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�\n"); break;
	case 17:
	case 18:
	case 19:printf("����л��Դϴ�\n"); break;
	default: printf("�л��� �ƴѰ�����\n");

	}

		
	




	return 0;
}