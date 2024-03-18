/*
#include <stdio.h>
int main()
{
char fullName[40];
printf("Enter your full name\n");
fgets(fullName,sizeof(fullName),stdin);
printf("%s\n",fullName);
if (%s==hemanth){
	printf("welcome");
}

	return 0;
}
*/
#include <stdio.h>
int main()
{
	int i;
	char str[40];
	printf("hello this is jarvis\n");
	printf("What is your name sir:\n");
	scanf("%[^\n]s",str);
	printf("Welcome Mr.%s\n",str);
	printf("Please enter your 4 digit passcode to continue>\n");
	scanf("%d",&i);
	if (i==1999)
	{
		printf("Welcome to the private vault MR.%s\n",str);

	}
	else{
		printf("ERROR:::::WRONG PASSCODE\n\n");
	}



	return 0;
} 