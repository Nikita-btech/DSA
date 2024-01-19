#include<stdio.h>
#include<stdlib.h>
int a=6;
int stack[6];
int top=-1;
  void push()
  {
    
    if(top==a-1)
    printf("Overflow");
    else{
        top++;
        int x;
    printf("Enter data:");
    scanf("%d",&x);
        stack[top]=x;
    }
  } 
 void pop()
 {
    int i;
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        i=stack[top];
        top--;
        printf("Popped item:%d",i);
    }
 } 
 void peek()
 {
    if(top==-1){
        printf("Empty");
    }
    else{
        printf("Peek element:%d",stack[top]);
    }
 }
 void display()
 {
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
 }
int main()
{
    int n;
    printf("Enter your choice:");
    scanf("%d",&n);
    switch(n){
        case 1:
        push();
        break;
        
        case 2:
        pop();
        break;

        case 3:
        peek();
        break;

        case 4:
        display();
        break;
    }
    
 return 0;
}