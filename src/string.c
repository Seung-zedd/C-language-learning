#include <stdio.h>

int main(void)
{
	//���� vs ���ڿ�
	/*char c = 'A';
	printf("%c\n", c);*/

	//���ڿ� ������ Null string('\0')�� ���Ƿ�, str + 1�� �迭ũ��
	/*char str[7] = "coding";
	printf("%s\n", str);*/

	/*char str[] = "coding";

	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}*/

	/*char str[] = "�����ڵ�";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));
	*/
	//���� 1����: 1byte, 
	//�ѱ� 1����: 2byte, 
	//char ũ��:  1byte
	
	for (int i = 0; i < 128; i++)
		printf("�ƽ�Ű�ڵ� ���� %d: %c\n", i, i);

	return 0;
}