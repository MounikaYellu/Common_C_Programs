#include<stdio.h>
#define MAX 5
// function: linearSearch() to search an element
int linearSearch(int *a,int n)
{
	int i,pos=-1;
	for(i=0;i<MAX;i++)
	{
		if(a[i]==n)
		{
			pos=i;
			break;
		}
	}
	return pos;
}
int main()
{
	int i,n,arr[MAX];
	int num; //element to search
	int position;
	printf("\n Enter five elements:\n");
	for(i=0;i<MAX;i++)
		scanf("%d",&arr[i]);
	printf("\n Enter the element to search:");
	scanf("%d",&num);
	// Calling linearSearch function
	position=linearSearch(arr,num);
	if(num==-1)
		printf("Element not found \n");
	else
		printf("Element found @%d position \n",position);
	return 0;
}
