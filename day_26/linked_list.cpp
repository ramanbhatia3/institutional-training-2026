#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Node{
public:
    int num;
    Node *next;

    Node(){
        this->num = 0;
        next = nullptr;
    }

    Node(int num){
        this->num = num;
        next = nullptr;
    }
};

class LinkedList{
    Node *start = nullptr;

public:
    void insert();
    void display();
    void del();
    void atbeg();
    void atend();
    void count();
    void edit();
    void before();
    void after();
    void atpos();
    void sort();
    void reverse();
    void delbeg();
    void delend();
    void delbefore();
    void delafter();
    void delatpos();
};

// cpp
// LinkedList L1;
// *ptr = new LinkedList; // ptr->atBeg();

// java
// ptr = new LinkedList; // ptr.atBeg();

int main(){
    LinkedList L1;

    int ch1;
    char choice1 = 'y';

    system("cls"); // clrscr();

    do
    {
        printf("\n LINKED LIST PROJECT \n");
        printf("\n 1. INSERT");
        printf("\n 2. DISPLAY");
        printf("\n 3. DELETE");
        printf("\n 4. EDIT");
        printf("\n 5. COUNT NODES");
        printf("\n 6. SORTING");
        printf("\n 7. REVERSE");
        printf("\n 8. EXIT");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch1);

        switch (ch1)
        {
        case 1:
            L1.insert();
            break;

        case 2:
            L1.display();
            break;

        case 3:
            L1.del();
            break;

        case 4:
            L1.edit();
            break;

        case 5:
            L1.count();
            break;

        case 6:
            L1.sort();
            break;

        case 7:
            L1.reverse();
            break;

        case 8:
            choice1 = 'n';
            break;

        default:
            printf("Invalid Choice");
        }

    } while (choice1 == 'y');

    return 0;
}

void LinkedList::insert()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n 1. ATBEG");
        printf("\n 2. ATEND");
        printf("\n 3. BEFORE");
        printf("\n 4. AFTER");
        printf("\n 5. ATPOSI");
        printf("\n 6. EXIT");
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

void LinkedList::del()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n 1. ATBEG");
        printf("\n 2. ATEND");
        printf("\n 3. BEFORE");
        printf("\n 4. AFTER");
        printf("\n 5. ATPOSI");
        printf("\n 6. EXIT");
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

void LinkedList::display()
{
    Node *temp = start;

    if (start == nullptr)
    {
        printf("Empty Linked List.");
        return;
    }

    while (temp != nullptr)
    {
        printf("%d -> ", temp->num);
        temp = temp->next;
    }

    printf("NULL");
}

void LinkedList::atbeg()
{
    int val;

    printf("Enter data of node: ");
    scanf("%d", &val);

    Node *ptr = new Node(val);

    if (start == nullptr)
        start = ptr;
    else
    {
        ptr->next = start;
        start = ptr;
    }
}

void LinkedList::atend()
{
    Node *temp = start;

    int val;

    printf("Enter data of node: ");
    scanf("%d", &val);

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        start = ptr;
        return;
    }

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = ptr;
}

void LinkedList::count()
{
    int count = 0;
    Node *temp = start;

    if (start == nullptr)
    {
        printf("Empty Linked List.");
        return;
    }

    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    printf("Count: %d", count);
}

void LinkedList::edit()
{
    int current_value, new_value;

    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter the value to edit: ");
    scanf("%d", &current_value);

    printf("Enter the new value: ");
    scanf("%d", &new_value);

    Node *temp = start;

    while (temp != nullptr)
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

void LinkedList::before()
{
    int val, key;

    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Insert before: ");
    scanf("%d", &key);

    Node *ptr = new Node(val);

    if (start->num == key)
    {
        ptr->next = start;
        start = ptr;
        return;
    }

    Node *prev = start;
    Node *curr = start->next;

    while (curr != nullptr)
    {
        if (curr->num == key)
        {
            prev->next = ptr;
            ptr->next = curr;
            return;
        }

        prev = curr;
        curr = curr->next;
    }

    printf("Value not found.");
}

void LinkedList::after()
{
    int val, key;

    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Insert after: ");
    scanf("%d", &key);

    Node *temp = start;

    while (temp != nullptr)
    {
        if (temp->num == key)
        {
            Node *ptr = new Node(val);

            ptr->next = temp->next;
            temp->next = ptr;

            return;
        }

        temp = temp->next;
    }

    printf("Value not found.");
}

void LinkedList::atpos()
{
    int val, pos;

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Enter position: ");
    scanf("%d", &pos);

    Node *ptr = new Node(val);

    if (pos == 1)
    {
        ptr->next = start;
        start = ptr;
        return;
    }

    Node *temp = start;

    for (int i = 1; i < pos - 1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        printf("Invalid Position.");
        delete ptr;
        return;
    }

    ptr->next = temp->next;
    temp->next = ptr;
}

void LinkedList::sort()
{
    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    Node *i, *j;

    for (i = start; i != nullptr; i = i->next)
    {
        for (j = i->next; j != nullptr; j = j->next)
        {
            if (i->num > j->num)
            {
                int temp = i->num;
                i->num = j->num;
                j->num = temp;
            }
        }
    }

    printf("Linked List sorted in ascending order.");
}

void LinkedList::reverse()
{
    if (start == nullptr || start->next == nullptr)
    {
        printf("Linked List is Empty or has only one node.");
        return;
    }

    Node *prev = nullptr;
    Node *curr = start;
    Node *next_node = nullptr;

    while (curr != nullptr)
    {
        next_node = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next_node;
    }

    start = prev;
    printf("Linked List reversed.");
}

void LinkedList::delbeg()
{
    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    Node *temp = start;
    start = start->next;
    temp->next = nullptr;
    delete temp;
    printf("Node deleted from beginning.");
}

void LinkedList::delend()
{
    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (start->next == nullptr)
    {
        delete start;
        start = nullptr;
        printf("Node deleted from end.");
        return;
    }

    Node *prev = start;
    Node *temp = start->next;

    while (temp->next != nullptr)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = nullptr;
    delete temp;
    printf("Node deleted from end.");
}

void LinkedList::delbefore()
{
    int key;

    if (start == nullptr || start->next == nullptr)
    {
        printf("Not enough nodes to delete before a value.");
        return;
    }

    printf("Delete before: ");
    scanf("%d", &key);

    Node *prev = nullptr;
    Node *curr = start;

    while (curr != nullptr && curr->next != nullptr)
    {
        if (curr->next->num == key)
        {
            Node *temp = curr;
            if (prev == nullptr)
                start = curr->next;
            else
                prev->next = curr->next;
            delete temp;
            printf("Node deleted before the given value.");
            return;
        }

        prev = curr;
        curr = curr->next;
    }

    printf("Value not found.");
}

void LinkedList::delafter()
{
    int key;

    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Delete after: ");
    scanf("%d", &key);

    Node *temp = start;

    while (temp != nullptr)
    {
        if (temp->num == key)
        {
            if (temp->next == nullptr)
            {
                printf("No node exists after the given value.");
                return;
            }

            Node *to_delete = temp->next;
            temp->next = to_delete->next;
            delete to_delete;
            printf("Node deleted after the given value.");
            return;
        }

        temp = temp->next;
    }

    printf("Value not found.");
}

void LinkedList::delatpos()
{
    int pos;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1)
    {
        printf("Invalid Position.");
        return;
    }

    if (pos == 1)
    {
        Node *temp = start;
        start = start->next;
        delete temp;
        printf("Node deleted from position 1.");
        return;
    }

    Node *prev = start;
    Node *temp = start->next;
    int i = 2;

    while (temp != nullptr && i < pos)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == nullptr)
    {
        printf("Invalid Position.");
        return;
    }

    prev->next = temp->next;
    delete temp;
    printf("Node deleted from the specified position.");
}