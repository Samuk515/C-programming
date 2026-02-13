#include <stdlib.h>
#include <stdio.h>

void create();
void display();
void insert_begin();

void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node
{
    int Data;
    struct node *next;
};
struct node *start = NULL;
int main()
{
    int choice;
    while (1)
    {

        printf("\n\nMENU\n");
        printf("1.Display\n");
        printf("2.Insert at the beginning\n");
        printf("3.Insert at the end\n");
        printf("4.Insert at specified position\n");

        printf("5.Delete from beginning \n");
        printf("6.Delete from the end \n");
        printf("7.Delete from specified position\n");
        printf("8.Exit\n");
        printf("--------------------------------------\n");
        printf("Enter your choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
            insert_begin();
            break;
        case 3:
            insert_end();
            break;
        case 4:
            insert_pos();
            break;
        case 5:
            delete_begin();

            break;
        case 6:
            delete_end();
            break;
        case 7:
            delete_pos();
            break;

        case 8:
            exit(0);
            break;

        default:
            printf("\n Wrong Choice:\n");
            break;
        }
    }
    return 0;
}

void display()
{
    struct node *temp;

    if (start == NULL)
    {
        printf("\nList is empty:\n");
        return;
    }
    else
    {
        temp = start;
        printf("\nThe List elements are:\n");
        while (temp != NULL)
        {
            printf("%d\t", temp->Data);
            temp = temp->next;
        }
    }
}
void insert_begin()
{
    struct node *NewNode;
    NewNode = (struct node *)malloc(sizeof(struct node));
    if (NewNode == NULL)
    {
        printf("\nOut of Memory Space:\n");

        return;
    }
    printf("\nEnter the data value for the node:\t");
    scanf("%d", &NewNode->Data);

    if (start == NULL)
    {
        NewNode->next = NULL;
    }
    else
    {
        NewNode->next = start;
    }
    start = NewNode;
}
void insert_end()
{
    struct node *temp, *NewNode;
    NewNode = (struct node *)malloc(sizeof(struct node));
    if (NewNode == NULL)
    {
        printf("\nOut of Memory Space:\n");

        return;
    }
    printf("\nEnter the data value for the node:\t");
    scanf("%d", &NewNode->Data);
    NewNode->next = NULL;
    if (start == NULL)
    {
        start = NewNode;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
    }
}
void insert_pos()
{
    struct node *NewNode, *temp;
    int i = 1, pos;

    temp = start;
    NewNode = (struct node *)malloc(sizeof(struct node));
    if (NewNode == NULL)
    {
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the position for the new node to be inserted:\t");
    scanf("%d", &pos);
    printf("\nEnter the data value of the node:\t");
    scanf("%d", &NewNode->Data);
    while (i < pos - 1)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("Node in the list is less than the position \n");
        }
        i = i + 1;
    }

    NewNode->next = temp->next;

    temp->next = NewNode;
}

void delete_begin()
{
    struct node *temp;
    if (temp == NULL)
    {
        printf("\nList is Empty:\n");
        return;
    }
    else
    {
        temp = start;
        start = start->next;
        printf("\nThe deleted element is :%d\t", temp->Data);
        free(temp);
    }
}
void delete_end()
{
    struct node *temp, *hold;
    if (start == NULL)

    {
        printf("\nList is Empty:");
        exit(0);
    }
    else if (start->next == NULL)
    {
        hold = start;
        start = NULL;
        printf("\nThe deleted element is:%d\t", hold->Data);
        free(hold);
    }
    else
    {
        hold = start;
        while (hold->next != NULL)
        {
            temp = hold;
            hold = hold->next;
        }
        temp->next = NULL;
        printf("\nThe deleted element is:%d\t", hold->Data);
        free(hold);
    }
}
void delete_pos()
{
    int i, pos;
    struct node *temp, *hold;
    if (start == NULL)
    {
        printf("\nThe List is Empty:\n");
        exit(0);
    }
    else
    {
        printf("\nEnter the position of the node to be deleted:\t");
        scanf("%d", &pos);
        if (pos == 0)
        {
            hold = start;
            start = start->next;
            printf("\nThe deleted element is:%d\t", hold->Data);
            free(hold);
        }
        else
        {

            hold = start;
            while (i < pos)

            {
                temp = hold;
                hold = hold->next;

                if (hold == NULL)
                {
                    printf("\nPosition not Found:\n");
                    return;
                }
                i = i + 1;
            }
            temp->next = hold->next;
            printf("\nThe deleted element is:%d\t", hold->Data);
            free(hold);
        }
    }
}