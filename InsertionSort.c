#include<stdio.h>
void InsertionSort(int a[],int n)
{
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
     
}
void printArray(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
}
int main()
{
    int a[10];
    int n;
    printf("Enter the size of the list:");
    scanf("%d",&n);
    printf("Enter the elements of the list:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Unsorted list:\n");
    printArray(a,n);
    InsertionSort(a,n);
    printf("Sorted list:\n");
    printArray(a,n);
}