/* Main не дописан и не полностью работоспособен.
Применяется в данной ЛР в качестве многофайлового приложения. */

#include <stdio.h>

#define MAX_PATH 260

int input(char str[])
{
	char delim;
	printf("Enter path:\n");
	fgets(str, MAX_PATH, stdin);
	printf("Enter delim:\n");
	scanf("%s", &delim);
	//str[slen(str) - 1] = '\0';
	return delim;
}

int check(char str[], char delim)
{
	char nsym[] = { '\\', '"', '/', ':', '*', '?', '<', '>', '|', '\0' }; //запрещенные символы 
	int flag = 0, flg = 0;
	if (delim == ' ')
	{
		printf("Delim error. Delim is space.\n");
		flag = 1;
	}
	if ((str == ' ') || (str[0] == '\0'))
	{
		printf("Path error. Path is space.\n");
		flag = 1;
	}
	flg = scspn(str, nsym);
	if (flg != 0)
		printf("Path error. Used ban symbol.\n");
	flag = flag + flg;

	return flag;
}

void output(char str[])
{
	printf("New path: ");
	printf(" %s", str);
}

int main()
{
	char str[MAX_PATH], delim;
	delim = input(str);
	int flag = check(str, delim);
	if (flag != 0)
	{
		printf("Check function error. Program will stop.\n");
	}
	output(str);
	
	return 0;
}
