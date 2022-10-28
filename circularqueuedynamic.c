#include<stdio.h>
#include<stdlib.h>
int enqueue();
int dequeue();
int display();
int isEmpty();
typedef struct queue
{
   int element;
   struct queue *next;
}queue;
queue *head=NULL;
void main()
{
    int choice,status;
    while(1)
    {
        printf("\n*******************************");
        printf("\n1.Enqueue element");
        printf("\n2.Dequeue element");
        printf("\n3.Display element");
        printf("\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
        case 1:
            status=enqueue();
            if(status==1)
                printf("QUEUE is full...");
            else
                printf("succesfully enqueue element");
            break;
        case 2:
            status=dequeue();
            if(status==1)
                printf("QUEUE is empty...");
            break;
        case 3:
            status=display();
            if(status==1)
                printf("Queue is empty...");
            else
                printf("\nSuccessfully printed");
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid choice");
        }
    }
}
int isEmpty()
{
    if(head==NULL)
        return 1;
    return 0;
}
int enqueue()
{
    queue *newnode=NULL,*temp;
    newnode=(queue*)malloc(sizeof(queue));
    if(newnode==NULL)
        return 1;
    int data;
    printf("Enter your data:");
    scanf("%d",&data);
    newnode->element=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return 0;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
           temp=temp->next;
        }
        temp->next=newnode;
    }
    return 0;
}
int dequeue()
{
    queue *temp;
    int status=isEmpty();
    if(status==1)
        return 1;
    printf("deleted item:%d",head->element);
    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        return 0;
    }
    temp=head;
    head=head->next;
    free(temp);
    return 0;

}
int display()
{
    queue *temp;
    int status=isEmpty();
    if(status==1)
        return 1;
    temp=head;
    printf("Elements in Queue are:");
    while(temp!=NULL)
    {
       printf("%d ",temp->element);
       temp=temp->next;
    }
    return 0;
}

