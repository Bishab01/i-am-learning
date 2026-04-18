//ascending order sorting using selection sort
#include<stdio.h>

void selectionSort(int arr[],int n)
{
    int i,j;
    printf("Sorted Array:\n");
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
                min=j;         
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(j=0;j<n;j++)
        printf("%d ",arr[j]);

}

int main()
{
    int arr[]={10,15,64,45,55,76,67,5};
    int i,n=sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted Array:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    selectionSort(arr,n);
    return 0;
}