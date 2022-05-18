#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void main()
{
    //creating a linked list
    struct Node *head, *newnode, *temp;
    head = 0;
    int choice = 1, count;

    while (choice)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data:");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("\n Do you wish to continue?(yes=1,no=0)");
        scanf("%d", &choice);
    }
    //printing the list:-
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    //count the nodes
    temp = head;
    while (temp != 0)
    { count++;
        temp = temp->next;
       
    }

    //counting nth node from end
    int n, i = 1;
    printf("Enter the position n: \n");
    scanf("%d", &n);
    if (n > count)
        printf("-1 \n");
    else
    {
        temp = head;
        for (i = 1; i < count - n + 1; i++)
        {
            temp = temp->next;
        }
        printf("%d \n", temp->data);
    }
}