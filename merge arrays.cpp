#include<stdio.h>
void mergearrays(int arr1[],int size1,int arr2[],int size2,int merged[])
{
	int i=0,j=0,k=0;
	while(i<size1)
	{
		merged[k++]=arr1[i++];
	}
	while(j<size2)
	{
		merged[k++]=arr2[j++];
	}
}
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,0};
	int size1=sizeof(arr1)/sizeof(arr1[0]);
	int size2=sizeof(arr2)/sizeof(arr2[0]);
	int merged[size1+size2];
	mergearrays(arr1,size1,arr2,size2,merged);
	printf("merged array is:");
	for(int i=0;i<size1+size2;i++)
	{
 printf("%d ", merged[i]);	}
	printf("\n");
	return 0;

}

