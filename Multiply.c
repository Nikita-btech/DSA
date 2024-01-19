#include<stdio.h>
 struct add{
    int coeff;
    int expo;
}poly1[10],poly2[10],poly3[20];

int main()
{
    int n,m;
    printf("Enter the size of first polynomial:");
    scanf("%d",&n);
     printf("Enter the size of second polynomial:");
    scanf("%d",&m);
    printf("Enter the first polynomial:\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the coefficient of element %d:",i+1);
        scanf("%d",&poly1[i].coeff);
 printf("Enter the exponent of element %d:",i+1);
        scanf("%d",&poly1[i].expo);
    
    }
    printf("Enter the second polynomial:\n");
    for(int i=0;i<m;i++)
    {
        printf("Enter the coefficient of element %d:",i+1);
        scanf("%d",&poly2[i].coeff);
 printf("Enter the exponent of element %d:",i+1);
        scanf("%d",&poly2[i].expo);

    }
     function(n,m);
    return 0;
}
function(int n,int m)
{
    int h=n*m;
    int o=0;
    int i=0,j=0,k=0;
    for(i=0;i<h;i++)
    {
      for(j=0;j<h;j++)
      {
        for(k=0;k<h;k++)
        {
        poly3[k].coeff=poly1[i].coeff*poly2[j].coeff;
        poly3[k].expo=poly1[i].expo+poly2[j].expo;
    
    }
      }
    }
    printf("%d",o);
    display(n-m);
}
display(int h)
{
    int a=0;
    while(a<h)
    {
        if(poly3[a].coeff>0)
        {
            printf("%d^%d ",poly3[a].coeff,poly3[a].expo);
            h++;
        }
    }
}