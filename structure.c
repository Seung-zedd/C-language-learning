#include <stdio.h>
//����ü ����(JS�� ������ �Լ�ó�� �빮�ڷ� ���°� ����)
struct GameInfo {
	char* name ;
	int year ;
	int price ;
	char* company ;

	struct GameInfo* friendgame; //���� ��ü ����
};

int main(void)
{
	char* name = "��������";
	int year = 2017;
	int price = 50;
	char* company = "����ȸ��";

	char* name2 = "�ʵ�����";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "�ʵ�ȸ��";

	//����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	//����ü ���
	printf("--���� ��� ����--\n");
	printf("���Ӹ�: %s\n", gameInfo1.name);
	printf("�߸ų⵵: %d\n", gameInfo1.year);
	printf("����: %d\n", gameInfo1.price);
	printf("���ۻ�: %s\n", gameInfo1.company);

	//����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = { "�ʵ�����",2017,100,"�ʵ�ȸ��" };
	printf("\n--�Ǵٸ� ���� ��� ����--\n");
	printf("���Ӹ�: %s\n", gameInfo2.name);
	printf("�߸ų⵵: %d\n", gameInfo2.year);
	printf("����: %d\n", gameInfo2.price);
	printf("���ۻ�: %s\n", gameInfo2.company);

	//����ü �迭
	struct GameInfo gameArray[2] = { 
		{ "��������",2017,50,"����ȸ��"},
		{ "�ʵ�����",2017,100,"�ʵ�ȸ��" } 
	};

	//����ü ������(��������� '.'�� '*'���� ���⶧���� ��ȣ�� �������)
	//����ü�� ȭ��ǥ �����ڰ� �� �������̹Ƿ� ���� ���� ��
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("\n\n--�̼Ǹ��� ���� ��� ����--\n");
	printf("���Ӹ�: %s\n", gamePtr -> name);
	printf("�߸ų⵵: %d\n", gamePtr ->year);
	printf("����: %d\n", gamePtr->price);
	printf("���ۻ�: %s\n", gamePtr->company);
	
	//��������� '.'�� '*'���� ���⶧���� ��ȣ�� �������
	/*printf("���Ӹ�: %s\n", (*gamePtr).name);
	printf("�߸ų⵵: %d\n", (*gamePtr).year);
	printf("����: %d\n", (*gamePtr).price);
	printf("���ۻ�: %s\n", (*gamePtr).company);*/
	
	//���� ��ü �Ұ�
	gameInfo1.friendgame = &gameInfo2;
	printf("\n\n--���� ��ü�� ���� ��� ����--\n");
	printf("���Ӹ�: %s\n", gameInfo1.friendgame->name);
	printf("�߸ų⵵: %d\n", gameInfo1.friendgame->year);
	printf("����: %d\n", gameInfo1.friendgame->price);
	printf("���ۻ�: %s\n", gameInfo1.friendgame->company);
	


	return 0;
}