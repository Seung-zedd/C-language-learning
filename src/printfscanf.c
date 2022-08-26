#include <stdio.h>

int main_printfscanf(void)
{	//橇肺璃飘:捞抚? 唱捞? 个公霸? 虐? 裹了疙?
	char name[255];
	int age = 0;
	float weight = 0;
	double height = 0;
	char crime[255] ;

	printf("捞抚?: ");
	scanf("%s", name, sizeof(name));

	printf("唱捞?: ");
	scanf("%d", &age);

	printf("个公霸?: ");
	scanf("%f", &weight);

	printf("虐?: ");
	scanf("%lf", &height);

	printf("裹了疙?: ");
	scanf("%s", crime, sizeof(crime));

	printf("\n\n----裹了磊 疙窜----\n");
	printf("捞抚:       %s\n", name);
	printf("唱捞:       %d\n", age);
	printf("个公霸:     %.2f\n", weight);
	printf("虐:         %.2lf\n", height);
	printf("裹了疙:     %s\n", crime);

	return 0;
}
