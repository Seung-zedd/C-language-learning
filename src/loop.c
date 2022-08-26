#include <stdio.h>

int main_loop(void)
{	//for(선언; 조건; 증감)
	for (int i = 0; i < 10; i++)
	{
		printf("Hello, world %d\n", i);
	}

	//while(조건) {  }
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
	}

	// do {  }  while (조건)
	int i = 1;
	do
	{
		printf("Hello World %d\n", i++);
	}

	while (i <= 10);

	// 2중 반복문으로 구구단 만들기
	for (int i = 2; i < 10; i++)
	{
		printf("%d단 계산\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}

	//별 쌓기

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	//거꾸로 별 쌓기(결과:위에서 아래로 순서대로 진행하기 때문에, j가 끝나면 k로 넘어감)
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
	
	//프로젝트:피라미드 쌓기:2n+1로 진행, floor가 5층이면 2*i +1

	printf("몇 층을 쌓겠느냐?: ");

	int floor = 0;
	scanf("%d", &floor);

	for (int i = 0; i < floor; i++) //줄바꿈 용
	{
		for (int j = i; j < floor - 1; j++) //S 출력용
		{
			printf(" ");
		}

		for (int k = 0; k < 2 * i + 1; k++) //별쌓기 용
		{
			printf("*");
		}

	printf("\n");
	}
	
	return 0;
}
