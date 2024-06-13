#include<stdio.h>

int main()
{
	int a;
	char old_password[20]="saikat",password[20];
	printf("enter password=");
	scanf("%s",password);

	a=strcmp(old_password,password);          //strcmp() is a comparison function of strings.
	if (a==0)
	{
		printf("password matched.");
	}
	else
	{
		printf("password didn't match.'");
	}
	
	return 0;
	
}
	
