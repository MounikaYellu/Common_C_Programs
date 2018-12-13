#include<stdio.h>
#include<ctype.h>
/*************
* function name : StringCmp,StringCmpi
* Parameter : char* s1,char* s2
* Return : 0-success , 1-fail 
* Description
	StringCmp - Compares two strings 
	StringCmpi - Compares two string ( ignoring case )
**************/
int StringCmp(char *s1,char *s2);
int StringCmpi(char *s1,char *s2);
int main()
{
	char str1[100],str2[100];
	printf("Enter string1 :");
	scanf("%[^\n]s",str1); // Read string with spaces 
	getchar();//to read enter after first string
	printf("Enter string2 :");
	scanf("%[^\n]s",str2);//read string with spaces
	if(!StringCmp(str1,str2))
		printf("\n StringCmp : Strings are same");
	else
		printf("\n StringCmp : Strings are not same");
	if(!StringCmpi(str1,str2))
		printf("\n StringCmpi : Strings are same");
	else
		printf("\n StringCmpi : Strings are not same");
	printf("\n");
	return 0;
}
/********** Function definition *************/
int StringCmp(char *s1,char *s2)
{
	int i=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
			return 1;
	}
	return 0;
}
/*********** Function definition ***************/
int StringCmpi(char *s1,char *s2)
{
	int i=0,diff=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(toupper(s1[i])!=toupper(s2[i]))
			return 1;
	}
	return 0;
}

