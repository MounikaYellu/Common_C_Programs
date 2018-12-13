#include<stdio.h>
/**********************************
*Function name: StringCpy
*Parameter: s1,s2 : string
*Description: copies string S2 into S1
***********************************/
void StringCpy(char* s1,char* s2);
int main()
{
	char str1[100],str2[100];
	printf("Enter String1: ");
	scanf("%[^\n]s",str1); //read string with spaces
	StringCpy(str2,str1);
	printf("String1:%s \nString2:%s\n",str1,str2);
	return 0;
}
/******* Function definition ************/
void StringCpy(char* s1,char* s2)
{
	int i=0;
	while(s2[i]!='\0')
	{
		s1[i]=s2[i];
		i++;
	}
	s1[i]='\0'; /*string terminates by NULL*/
}

