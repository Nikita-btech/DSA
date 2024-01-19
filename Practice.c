#include<stdio.h>
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void merge(int arr[],int mid,int low,int high)
{
    int i,j,k,B[20];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
           B[k]=arr[i];
           k++;
           i++;
        }
        else
        {
           B[k]=arr[j];
           k++;
           j++;
        }
    }
    while(i<=mid)
    {
        B[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        B[k]=arr[j];
        k++;
        j++;
    }
    for(int a=0;a<high;a++)
    {
        arr[a]=B[a];
    }
}
void mergesort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,mid,low,high);
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
   mergesort(arr,0,n-1);
   printf("Sorted Array:\n");
   PrintArray(arr,n);
}