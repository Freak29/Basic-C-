#include <stdio.h>
#include <conio.h>
#define CAPACITY 10
int stack[CAPACITY],top=-1;
void push(int);
int pop(void);
void peek(void);
void traverse(void);
void main()
{
	int ch,n,item;
	scanf("%d",&ch);
	do
	{
	printf("\nStack operation");
	printf("\n1. Push");
	printf("\n2. Pop");
	printf("\n3. Peek");
	printf("\n4. Traverse");
	printf("\n5. Exit");
	scanf("%d",&n);
	switch(n)
	{
		case 1 : printf("\n Enter the element");
		         scanf("%d",&item);
		         push(item);
		         break;
		         
		case 2 : item = pop();
		         if(item==0)
		         printf("\nStack Underflow");
		         else
		         printf("\nPopped Item %d",item);
		         break;
		         
		case 3 : peek();
		         break;
		case 4 : traverse();
		         break;
		default : printf("\nInvalid");
	}
    }while(ch==5);
    
}
void push(int ele)
{
	if(top==CAPACITY-1)
	printf("\nStack Overflow");
	else
	{
		top++;
		stack[top]=ele;
	}
}
int pop()
{
	if(top==-1)
	return 0;
	else
    return stack[top--];
}
void peek()
{
	if(top==-1)
	printf("\nStack Empty");
	else
	printf("\nPresent element %d",stack[top]);
}
void traverse()
{
	if(top==-1)
	printf("\nStack Empty");
	else
	{
	int i;
	     for(i=0;i<=top;i++)
	    {
		printf("\nElements in stack are %d",stack[i]);
	    }
   }
}

