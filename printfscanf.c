#include <stdio.h>

int main_printfscanf(void)
{	//������Ʈ:�̸�? ����? ������? Ű? ���˸�?
	char name[255];
	int age = 0;
	float weight = 0;
	double height = 0;
	char crime[255] ;

	printf("�̸�?: ");
	scanf("%s", name, sizeof(name));

	printf("����?: ");
	scanf("%d", &age);

	printf("������?: ");
	scanf("%f", &weight);

	printf("Ű?: ");
	scanf("%lf", &height);

	printf("���˸�?: ");
	scanf("%s", crime, sizeof(crime));

	printf("\n\n----������ ���----\n");
	printf("�̸�:       %s\n", name);
	printf("����:       %d\n", age);
	printf("������:     %.2f\n", weight);
	printf("Ű:         %.2lf\n", height);
	printf("���˸�:     %s\n", crime);

	return 0;
}