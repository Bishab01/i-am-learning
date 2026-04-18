//Sorting in ascending order
#include<stdio.h>

void insertionSort(int arr[],int n)
{
    int i,j;
    printf("Sorted array:\n");
    for(i=1;i<n;i++)
    {
        int unsortedEle=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>unsortedEle)//arr[j] is supposed to be the already element and arr is the sorted array from this part only
        {
            arr[j+1]=arr[j];//shifting the position of sorted element
            j--;
        }
        arr[j+1]=unsortedEle;//here we are inserting the unsorted element in the position it belongs in the sorted array
        /*for(j=0;j<=i;j++)
            printf("%d ",arr[j]);
        printf("\n");*/
    }
    for(j=0;j<n;j++)
        printf("%d ",arr[j]);
}

int main()
{
    int arr[]={34,7,23,32,5,62,67,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Unsorted Array:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    insertionSort(arr,n);
    return 0;
}