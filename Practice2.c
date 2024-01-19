#include<stdio.h>
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr,int low,int high)
{
      int pivot=arr[high];

    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<=pivot)
        {
            j++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
    int pi=partition(arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);
    }
}
int main()
{
    int arr[8];
    int n;
    printf("Enter the size:");
    scanf("%d",&n);

   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   printf("Entered list:\n");
   PrintArray(arr,n);
  quicksort(arr,0,n);
}