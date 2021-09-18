#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	scanf("%s", str);
	int a = strlen(str) - 1;
	for (int i = a; i >= 0; i--)
	{
		for (int j = 0; j <= a; j++)
		{
			if (i > j)
			{
				printf("%c", str[j]);
			}
		}
		printf("\n");
	}
	return 0;
}