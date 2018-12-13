#include<stdio.h>
#include<stdlib.h>
struct data
{
	int key;
	int value;
};
struct data *array;
int capacity=10;
int size=0;
//This function gives a unique hash code to the given key
int hashcode(int key)
{
	return(key%capacity);
}
//To check if given input(i.e. n) is prime or not
int if_prime(int n)
{
	int i;
	if(n==1||n==0)
		return 0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
// It returns prime number just greater than array capacity
int get_prime(int n)
{
	if(n%2==0)
	{
	n++;
	}
	for(;!if_prime(n);n+=2)
	return n;
}

void init_array()
{
	int i;
	capacity=get_prime(capacity);
	array=(struct data*) malloc(capacity * sizeof(struct data));
	for(i=0;i<capacity;i++)
	{
		array[i].key=0;
		array[i].value=0;
	}
}
//To insert a key in the hash table
void insert(int key)
{
	int index;
	index=hashcode(key);
	if(array[index].value==0)
	{
		//key is not present, insert it
		array[index].key=key;
		array[index].value=1;
		size++;
		printf("\n Key (%d) has been inserted \n",key);
	}
	else if(array[index].key==key)
	{
		//updating already existing key
		printf("\n Key (%d) already present, hence updating its value\n",key);
		array[index].value+=1;
	}
	else
	{
		//key can't be inserted as the index is already containing some other key
		printf("\n ELEMENT CAN'T BE INSERTED \n");
	}
}
//To remove a key from hash table
void remove_element(int key)
{
	int index=hashcode(key);
	if(array[index].value==0)
		printf("\n This key doesn't exist\n");
	else
	{
		array[index].key=0;
		array[index].value=0;
		size--;
		printf("\n key (%d) has been removed \n",key);
	}
}
//To display all the elements of a hash table
void display()
{
	int i;
	for(i=0;i<capacity;i++)
	{
		if(array[i].value==0)
			printf("\n Array[%d] has no elements \n",i);
		else
			printf("\n Array[%d] has below elements : \n key(%d) and value(%d) \t",i,array[i].key,array[i].value);
	}
}
int size_of_hashtable()
{
	return size;
}
void main()
{
	int choice,key,value,n,c;
	init_array();
	do
	{
		printf("\n Implementation of Hash Table in C\n");
		printf("************MENU*****************");
		printf("\n 1.Inserting an item in the Hash Table"
			"\n 2.Removing an item from the Hash Table"
			"\n 3.Check the size of Hash Table"
			"\n 4.Display the Hash Table"
			"\n \n Please enter your choice ");
		scanf("%d",&choice);
		switch(choice)
			{
			case 1:
				printf("Insertig element in Hash table\n");
				printf("Enter Key :\t");
				scanf("%d",&key);
				insert(key);
				break;
			case 2:
				printf("Deleting in Hash Table\n Enter the key to delete:");
				scanf("%d",&key);
				remove_element(key);
				break;
			case 3:
				n=size_of_hashtable();
				printf("Size of Hash table is : %d\n",n);
				break;
			case 4:
				display();
				break;
			default:
				printf("Wrong Input\n");
			}
		printf("\n Do you want to continue ? (Press 1 for yes) \t");
		scanf("%d",&c);
	}while(c==1);
}


