#include <stdio.h>

int main(void)
{
	//문자 vs 문자열
	char c = 'A';
	printf("%c\n", c);

	//문자열 끝에는 Null string('\0')이 들어가므로, str + 1을 배열크기
	char str[7] = "coding";
	printf("%s\n", str);

	char str[] = "coding";

	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}

	char str[] = "나도코딩";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));
	
	//영어 1글자: 1byte, 
	//한글 1글자: 2byte, 
	//char 크기:  1byte
	
	for (int i = 0; i < 128; i++)
		printf("아스키코드 정수 %d: %c\n", i, i);

	return 0;
}
