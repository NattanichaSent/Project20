#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int letters(char *ltrs)
{
	int i = 0,sum = 0;
	while (ltrs[i] != '\0')
	{
		sum++;
		i++;
	}
	//printf("%d", sum);
	return sum;
}


int main()
{
	char a[1000], b[1000], c[1000];
	scanf("%s",a);
	scanf("%s", b);
	scanf("%s", c);
	if (letters(a) > letters(b))
	{
		if (letters(c) > letters(a))
		{
			printf("%s", c);
		}
		else
		{
			printf("%s", a);
		}
	}
	if (letters(b) > letters(a))
	{
		if (letters(c) > letters(b))
		{
			printf("%s", c);
		}
		else
		{
			printf("%s", b);
		}
	}
	
	return 0;
}