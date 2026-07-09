#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int num;
    struct Node *next;
};

struct Node *start;

void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void atbeg();
void atend();
void before();
void after();
void atpos();
void delbeg();
void delend();
void delbefore();
void delafter();
void delatpos();

int main()
{
    int ch1;
    char choice1 = 'y';
    start = NULL;
    system("cls");

    do
    {
        printf("\n LINKED LIST PROJECT \n");
        printf("\n 1. INSERT     ");
        printf("\n 2. DISPLAY     ");
        printf("\n 3. DELETE      ");
        printf("\n 4. EDIT        ");
        printf("\n 5. COUNT NODES ");
        printf("\n 6. SORTING      ");
        printf("\n 7. REVERSE     ");
        printf("\n 8. EXIT        ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch1);

        switch (ch1)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            del();
            break;
        case 4:
            edit();
            break;
        case 5:
            count();
            break;
        case 6:
            // sort();
            break;
        case 7:
            // reverse();
            break;
        case 8:
            choice1 = 'n';
            break;
        default:
            printf("invalid choice");
        }
    } while (choice1 == 'y');

    return 0;
}

void insert()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n 1. ATBEG ");
        printf("\n 2. ATEND");
        printf("\n 3. BEFORE");
        printf("\n 4. AFTER ");
        printf("\n 5. ATPOSI");
        printf("\n 6. EXIT      ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch2);

        switch (ch2)
        {
        case 1:
            atbeg();
            break;
        case 2:
            atend();
            break;
        case 3:
            before();
            break;
        case 4:
            after();
            break;
        case 5:
            atpos();
            break;
        case 6:
            choice2 = 'n';
            break;
        default:
            printf("INVALID CHOICE");
        }
    } while (choice2 == 'y');
}

void del()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n 1. DELETE ATBEG ");
        printf("\n 2. DELETE ATEND");
        printf("\n 3. DELETE BEFORE");
        printf("\n 4. DELETE AFTER ");
        printf("\n 5. DELETE ATPOSI");
        printf("\n 6. EXIT      ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch2);

        switch (ch2)
        {
        case 1:
            delbeg();
            break;
        case 2:
            delend();
            break;
        case 3:
            delbefore();
            break;
        case 4:
            delafter();
            break;
        case 5:
            delatpos();
            break;
        case 6:
            choice2 = 'n';
            break;
        default:
            printf("INVALID CHOICE");
        }
    } while (choice2 == 'y');
}

void atbeg()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data of node: ");
    scanf("%d", &ptr->num);
    ptr->prev = NULL;
    ptr->next = NULL;

    if (start == NULL)
        start = ptr;
    else
    {
        ptr->next = start;
        start->prev = ptr;
        start = ptr;
    }
}

void display()
{
    struct Node *temp = start;

    if (start == NULL)
    {
        printf("Empty Linked List.");
        return;
    }

    printf("NULL <- ");

    while (temp != NULL)
    {
        printf("[%d] -> <- ", temp->num);
        temp = temp->next;
    }

    printf("NULL");
}

void atend()
{
    struct Node *temp = start;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data of node: ");
    scanf("%d", &ptr->num);
    ptr->prev = NULL;
    ptr->next = NULL;

    if (start == NULL)
    {
        start = ptr;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->prev = temp;
}

void count()
{
    int count = 0;
    struct Node *temp = start;

    if (start == NULL)
    {
        printf("Empty Linked List.");
        return;
    }

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    printf("Count: %d", count);
}

void edit()
{
    int current_value, new_value;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter the value to edit: ");
    scanf("%d", &current_value);

    printf("Enter the new value: ");
    scanf("%d", &new_value);

    struct Node *temp = start;

    while (temp != NULL)
    {
        if (temp->num == current_value)
        {
            temp->num = new_value;
            printf("Node updated successfully.");
            return;
        }

        temp = temp->next;
    }

    printf("Value not found in the linked list.");
}

void before()
{
    int val, key;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Insert before: ");
    scanf("%d", &key);

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->num = val;
    ptr->prev = NULL;
    ptr->next = NULL;

    if (start->num == key)
    {
        ptr->next = start;
        start->prev = ptr;
        start = ptr;
        return;
    }

    struct Node *prev = start;
    struct Node *curr = start->next;

    while (curr != NULL)
    {
        if (curr->num == key)
        {
            prev->next = ptr;
            ptr->prev = prev;
            ptr->next = curr;
            curr->prev = ptr;
            return;
        }

        prev = curr;
        curr = curr->next;
    }

    printf("Value not found.");
    free(ptr);
}

void after()
{
    int val, key;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Insert after: ");
    scanf("%d", &key);

    struct Node *temp = start;

    while (temp != NULL)
    {
        if (temp->num == key)
        {
            struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
            ptr->num = val;
            ptr->prev = temp;
            ptr->next = temp->next;
            if (temp->next != NULL)
                temp->next->prev = ptr;
            temp->next = ptr;
            return;
        }

        temp = temp->next;
    }

    printf("Value not found.");
}

void atpos()
{
    int val, pos;

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Enter position: ");
    scanf("%d", &pos);

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->num = val;
    ptr->prev = NULL;
    ptr->next = NULL;

    if (pos == 1)
    {
        ptr->next = start;
        if (start != NULL)
            start->prev = ptr;
        start = ptr;
        return;
    }

    struct Node *temp = start;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position.");
        free(ptr);
        return;
    }

    ptr->prev = temp;
    ptr->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = ptr;
    temp->next = ptr;
}

void delbeg()
{
    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    struct Node *temp = start;

    if (start->next == NULL)
    {
        start = NULL;
    }
    else
    {
        start = start->next;
        start->prev = NULL;
    }

    temp->next = NULL;
    free(temp);
    printf("Node deleted from beginning.");
}

void delend()
{
    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (start->next == NULL)
    {
        free(start);
        start = NULL;
        printf("Node deleted from end.");
        return;
    }

    struct Node *temp = start;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    temp->prev = NULL;
    free(temp);
    printf("Node deleted from end.");
}

void delbefore()
{
    int key;

    if (start == NULL || start->next == NULL)
    {
        printf("Not enough nodes to delete before a value.");
        return;
    }

    printf("Delete before: ");
    scanf("%d", &key);

    struct Node *curr = start;

    while (curr != NULL && curr->next != NULL)
    {
        if (curr->next->num == key)
        {
            struct Node *target = curr->next;
            struct Node *prev_node = curr->prev;

            if (prev_node == NULL)
            {
                start = target;
                target->prev = NULL;
            }
            else
            {
                prev_node->next = target;
                target->prev = prev_node;
            }

            curr->next = NULL;
            curr->prev = NULL;
            free(curr);
            printf("Node deleted before the given value.");
            return;
        }

        curr = curr->next;
    }

    printf("Value not found.");
}

void delafter()
{
    int key;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Delete after: ");
    scanf("%d", &key);

    struct Node *temp = start;

    while (temp != NULL)
    {
        if (temp->num == key)
        {
            if (temp->next == NULL)
            {
                printf("No node exists after the given value.");
                return;
            }

            struct Node *to_delete = temp->next;
            struct Node *next_node = to_delete->next;

            temp->next = next_node;
            if (next_node != NULL)
                next_node->prev = temp;
            else
                temp->next = NULL;

            to_delete->next = NULL;
            to_delete->prev = NULL;
            free(to_delete);
            printf("Node deleted after the given value.");
            return;
        }

        temp = temp->next;
    }

    printf("Value not found.");
}

void delatpos()
{
    int pos;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1)
    {
        printf("Invalid Position.");
        return;
    }

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (pos == 1)
    {
        struct Node *temp = start;
        start = start->next;
        if (start != NULL)
            start->prev = NULL;
        temp->next = NULL;
        free(temp);
        printf("Node deleted from position 1.");
        return;
    }

    struct Node *temp = start;
    int i = 1;

    while (temp != NULL && i < pos)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        printf("Invalid Position.");
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    temp->next = NULL;
    temp->prev = NULL;
    free(temp);
    printf("Node deleted from the specified position.");
}