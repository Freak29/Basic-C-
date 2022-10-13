// this code is written in cpp for multiplication of polynomials
// it uses linked_list as data structure.

#include <iostream>
using namespace std;
int count = 0;

struct node
{
    int data, power;
    node *next;
    node()
    {
        data = 0;
        power = 0;
        next = NULL;
    }
    node(int x, int y)
    {
        data = x;
        power = y;
        next = NULL;
    }
};
void createList(node *head, int n)
{
    node *newNode, *temp;
    int data, i;
    cout << endl<< endl<< "Enter the coefficient of x to the power " << n << ": ";
    cin >> data;

    if (head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    head->data = data;
    head->power = n;
    temp = head;
    for (i = n - 1; i >= 0; i--)
    {
        node *newNode = new node();
        if (newNode == NULL)
        {
            printf("Unable to allocate memory. ");
            break;
        }
        cout << "Enter the coefficient of x to the power " << i << ": ";
        cin >> data;
        newNode->data = data;
        newNode->power = i;
        temp->next = newNode;
        temp = temp->next;
    }
}
int traverseList(node *head, int n)
{
    count = 0;
    node *temp;
    if (head == NULL)
    {
        printf("List is Empty. ");
        return count;
    }
    temp = head;
    for (int i = n; temp != NULL; i--)
    {
        cout << "coefficient of x to the power " << i << "= " << temp->data << endl;
        temp = temp->next;
        count++;
    }
    return count;
}

void sum(node *head)
{
    node *temp1, *temp2, *dups;
    temp1 = head;
    while (temp1 != NULL && temp1->next != NULL)
    {
        temp2 = temp1;
        while (temp2->next != NULL)
        {
            if (temp1->power == temp2->next->power)
            {
                temp1->data = temp1->data + temp2->next->data;
                dups = temp2->next;
                temp2->next = temp2->next->next;
                delete (dups);
            }
            else
            {

                temp2 = temp2->next;
            }
        }
        temp1 = temp1->next;
    }
}

node *multiply(node *head1, node *head2, node *head3)
{
    node *temp1 = head1;
    node *temp2 = head2;
    node *temp3 = head3;
    if (temp3->next == NULL)
    {
        head3->data = ((temp1->data) * (temp2->data));
        temp2 = temp2->next;
    }
    while (temp1 != NULL)
    {
        while (temp2 != NULL)
        {
            node *newNode = new node(((temp1->data) * (temp2->data)), ((temp1->power) + (temp2->power)));
            temp3->next = newNode;
            temp3 = newNode;
            temp2 = temp2->next;
        }

        temp2 = head2;
        temp1 = temp1->next;
    }
    sum(head3);
    return head3;
}

int main()
{
    int i = 0, n = 0, m = 0;
    cout << "Please enter the degree of polynomial 1 : ";
    cin >> n;
    node *head1 = new node();
    createList(head1, n);
    cout << endl<< "Please enter the degree of polynomial 2 : ";
    cin >> m;
    node *head2 = new node();
    createList(head2, m);
    node *head3 = new node();
    cout << "\nData in the list \n"<< endl;
    cout << endl<< "First polynomial : " << endl;
    count = (traverseList(head1, n));
    cout << endl<< "Second polynomial : " << endl;
    count = (traverseList(head2, m));
    head3 = multiply(head1, head2, head3);
    cout << endl<< "Multiplication of the polynomials are :" << endl;
    count = (traverseList(head3, m * n));
}
