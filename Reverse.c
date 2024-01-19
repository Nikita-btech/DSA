#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *create(struct Node* head)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp=head;
    int x;
    for(int i=0;i<4;i++)
    {
        printf("Data:");
        scanf("%d",&x);
       temp->data=x;
       temp=temp->next;
    }
    temp->next=NULL;
}
void display(struct Node* head)
{
 struct Node *temp=head;
 while(temp!=NULL)
 {
    printf("%d\n",temp->data);
    temp=temp->next;
 }
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    create(head);
    display(head);
}