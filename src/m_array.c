#include <stdio.h>

int main(void)
{	//3차원 배열
	/*int arr[3][3][3];*/
	//□□□
	//□□□
	//□□□

	//□□□
	//□□□
	//□□□

	//□□□
	//□□□
	//□□□

	//다차원 배열 접근
	/*int arr2[2][5];*/
	//□□□□□
	//□□□□□

	//[0,0],[0,1],[0,2],[0,3],[0,4] -> ex)arr2[0][0]
	//[1,0],[1,1],[1,2],[1,3],[1,4] -> ex)arr2[1][4]

	//다차원 배열 선언(뒤에서 앞으로 읽어야 파악하기가 쉬움)
	//중갈호 뒤에, 쉼표 뒤를 Enter키를 누르면 배열모양과 같아짐
	int arr[5] = { 1,2,3,4,5 };
	int arr2[2][5] = {
		{1,2,3,4,5 },
		{1,2,3,4,5}
	};
	int arr3[4][2] = {
		{1,2},
		{3,4}, 
		{5,6},
		{7,8}
	};
	int arr4[3][3][3] = { 
		{ 
		{1,2,3},
		{4,5,6},
		{7,8,9}
		},
		{ 
		{11,12,13},
		{14,15,16},
		{17,18,19}
		},

		{ 
		{20,21,22},
		{23,24,25},
		{26,27,28}
		} 
	};

	//2차원 배열 사용:이중 for문으로 접근
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("2차원 배열 (%d , %d)의 값: %d\n", i, j, arr3[i][j]);
		}
		printf("\n");
	}

	//3차원 배열 사용:삼중 for문으로 접근
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("3차원 배열 (%d , %d , %d)의 값: %d\n", i, j, k, arr4[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
