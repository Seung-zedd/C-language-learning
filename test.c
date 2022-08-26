#include <stdio.h>

int main_Test(void)
{	//별 쌓기
	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}*/

	//거꾸로 별 쌓기(결과:위에서 아래로 순서대로 진행하기 때문에, j가 끝나면 k로 넘어감)
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
	//		printf("S");//S를 출력하고 j를 증가시킴
	//	}

	//	for (int k = 1; k <= i; k++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//
	//}

	//프로젝트:피라미드 쌓기:2n+1로 진행, floor가 5층이면 2*floor +1
	/*
   SS*
   S***
   *****
  
 
	*/ 
	printf("몇 층을 쌓겠느냐?: ");

	int floor = 0;
	scanf("%d", &floor);

	for (int i = 0; i < floor; i++) //줄바꿈 용
	{
		for (int j = i; j < floor - 1; j++) //S 출력용
		{
			printf(" ");
		}

		for (int k = 0;k< 2*i + 1; k++) //별쌓기 용
		{
			printf("*");
		}
		
		printf("\n");
	
	}
		
	
}