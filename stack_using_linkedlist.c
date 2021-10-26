#include <stdio.h>
#include <stdlib.h>

typedef struct s
{
    int num;
    struct s *next;
} node;

void push();
void pop();
void print();

node *top;

int main()
{
    int p;
    top = (node *)malloc(sizeof(node));
    top = NULL;
    while (1)
    {
        int c;
        printf("\n--MENU--\n");
        printf("1-PUSH\n");
        printf("2-POP\n");
        printf("3-PRINT\n");
        printf("4-EXIT\n");
        printf("\nEnter your choice: \n");

        scanf(" %d", &c);
        switch (c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        default:
            exit(0);
            break;
        }
    }
    return 0;
}

void push()
{
    node *s = NULL;
    s = (node *)malloc(sizeof(node));
    if (s == NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the number: ");
        scanf("%d", &s->num);
        s->next = top;
        top = s;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("\nUnderflow ");
    }
    else
    {
        printf("Deleted element is %d", top->num);
        top = top->next;
    }
}

void print()
{
    node *s = top;
    if (s == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("--STACK--");
        while (s != NULL)
        {
            printf("\n%d", s->num);
            s = s->next;
        }
    }
}
