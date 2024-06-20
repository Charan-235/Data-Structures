#include<stdio.h>
void findduplicates(int arr[],int size)
{
    int i,j;
    int hasduplicate=0;
    printf("duplicate values in the array are: ");
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;i++)
        {
        if(arr[i]==arr[j])
        {
            printf("%d",arr[i]);
            hasduplicate=1;
            break;
        }
        }
    }
    if(!hasduplicate)
    {
        printf(" no duplicates");
    }
    printf("\n");
}
int main()
{
    int arr[]={1, 3, 2, 3, 4, 5, 6, 2, 7};
    int size=sizeof(arr)/sizeof(arr[0]);
    findduplicates(arr,size);
    return 0;
}
