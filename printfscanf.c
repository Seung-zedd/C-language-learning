#include <stdio.h>

int main_printfscanf(void)
{	//프로젝트:이름? 나이? 몸무게? 키? 범죄명?
	char name[255];
	int age = 0;
	float weight = 0;
	double height = 0;
	char crime[255] ;

	printf("이름?: ");
	scanf("%s", name, sizeof(name));

	printf("나이?: ");
	scanf("%d", &age);

	printf("몸무게?: ");
	scanf("%f", &weight);

	printf("키?: ");
	scanf("%lf", &height);

	printf("범죄명?: ");
	scanf("%s", crime, sizeof(crime));

	printf("\n\n----범죄자 명단----\n");
	printf("이름:       %s\n", name);
	printf("나이:       %d\n", age);
	printf("몸무게:     %.2f\n", weight);
	printf("키:         %.2lf\n", height);
	printf("범죄명:     %s\n", crime);

	return 0;
}