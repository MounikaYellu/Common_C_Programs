#include<stdio.h>
#define MAX 100
int main()
{
	int arr[MAX],n,i,j,num,countDel;
	printf("Enter total number of elements\n");
	scanf("%d",&n);
	//Read array elements
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\n Enter number(element) to delete:");
	scanf("%d",&num);
	//Delete elements
	countDel=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			countDel++;
			//shift all other elements up
			for(j=i;j<n;j++)
				arr[j]=arr[j+1];
		}
	}
	if(countDel)
		printf("%d found %d times and deleted 			successfully",num,countDel);
	else
		printf("%d not found",num);
	printf("\n Array elements after deleting %d \n",num);
	for(i=0;i<(n-countDel);i++)
		printf("%d\t",arr[i]);
	return 0;
}



