// WAP to sort the elements of the array in ascending order using Bubble Sort technique.

#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int len;
    printf("Enter size of array : ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter elements of array : ");

    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting : ");
    printArray(arr,len);

    printf("Array after sorting : ");
    bubbleSort(arr, len);
    printArray(arr, len);

    return 0;
}


