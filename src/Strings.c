#include "Strings.h"

int slen(char str[])
{
	int i;

	for (i = 0; str[i] != '\0'; i++);

	return i;
}

int schr(char str[], char ch)
{
	int i = 0, idx = -1;
	
	while ((str[i] != '\0') && (str[i] != ch))
	{
		i++;
	}
	if (str[i] == ch)
		idx = i;
	
	return idx;
}

int stok(char str[], char del, char *ptr[])
{
	char *suf = str;
	ptr[0] = str;
	int i, j = 1;
	
	while ((i = schr(suf, del)) >= 0)
	{
		suf[i] = '\0';
		suf = suf + i + 1;
		ptr[j] = suf;
		j++;
	}
	
	return j;
}

int sunstok(char str[], char delim, char *ptr[], int cnt)
{
	int i;
	for (i = 1; i < cnt; i++)
	{
		*(ptr[i] - 1) = delim;
	}
}

int scpy(char str_1[], char str_2[])
{
	int i;
	for (i = 0; str_1[i] != '\0'; i++)
		str_2[i] = str_1[i];
	str_2[i] = '\0';
}

int scmp(char str_1[], char str_2[])
{
	int i, flag = 0;
	for (i = 0; (str_1[i] == str_2[i]) && str_1[i] != '\0' && str_2[i] != '\0'; i++);
	if (str_1[i] < str_2[i])
		flag = -1;
	if (str_1[i] > str_2[i])
		flag = 1;

	return flag;
}

int scspn(char str[], char nsym[])
{
	int i, flag = 0;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (schr(str[i], nsym) >= 0)
		{
			flag = 1;
		}
		return flag;
	}
}

int chrtoint(char str[])
{
	int temp = 0, i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = temp * 10 + (str[i] - '0');
		i++;
	}
	return temp;
}