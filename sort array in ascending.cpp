#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);	
			}
		}
	}
}
void printarray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[]={9, 8, 3, 2, 5};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("original array: ");
	printarray(arr,size);
	
	sort(arr,size);
	printf("sorted array is ");
	printarray(arr,size);
	return 0;
}
