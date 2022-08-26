#include <time.h>
#include <stdio.h>

int main(void)
{	//if문을 활용한 성인 or 학생
	/*printf("나이를 입력해주세요: ");

	int age = 0;

	scanf("%d", &age);

	if (age >= 20)
	{
		printf("성인입니다\n");
	}

	else
	{
		printf("학생입니다\n");
	}*/
	// 초등학생(8-13) / 중학생(14-16) / 고등학생(17-19)?
	//	if -> else if -> else 순
	/*printf("나이를 입력해주세요: ");

	int age = 0;

	scanf("%d", &age);

	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다\n");
	}

	else if(age>=14 && age<=16)
	{
		printf("중학생입니다\n");
	}

	else if(age>=17 && age<=19)
	{
		printf("고등학생입니다\n");
	}

	else
	{
		printf("나이 입력 오류\n");
	}*/

	// break, continue
	/*for (int i = 1; i <= 30; i++)
	{
		if(i >= 6)
	{
			printf("나머지는 집에 가세요\n");
			break;//가장 가까운 for문을 탈출(printf문이 한줄이면 중괄호 생략가능)
	}
		printf("%d번 학생은 조별 발표 준비를 하세요\n",i);
	}*/

	//1~30번까지 있는 반에서 7번은 아파서 결석, 6~10번 까지 조별발표
	/*
	* break:가장 가까운 for문을 탈출, 
	* continue:아래의 printf문을 출력하지 않고 i++
	*/
	
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i<=10)
		{	if (i == 7)
			{
				printf("%d번 학생은 아파서 결석했어요\n",i);
				continue;
			}
			printf("%d번 학생은 조별발표 준비를 하세요\n",i);
		
		}
	}*/

	// 가위 0 바위 1 보 2
	/*srand(time(NULL));
	int i = rand() % 3;

	switch (i)
	{
	
	case 0: printf("가위\n");
		break;
	case 1: printf("바위\n");
		break;
	case 2: printf("보\n");
		break;

	default:printf("몰라요\n");
	}*/

	// switch문을 이용 초등학생(8-13) / 중학생(14-16) / 고등학생(17-19)?
	
	
	srand(time(NULL));
	int age= rand() % 12 + 8; //8~19
	
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("초등학생입니다\n"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다\n"); break;
	case 17:
	case 18:
	case 19:printf("고등학생입니다\n"); break;
	default: printf("학생이 아닌가봐요\n");

	}
	//결론:변수의 범위가 크면 -> if~else문, 아니면 switch문
	return 0;
}
