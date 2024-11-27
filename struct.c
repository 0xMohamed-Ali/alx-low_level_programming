#include <stdio.h>
#include <stdlib.h>

struct data
{
    int x; // struct member
    int y;
}data1; // struct variable

typedef struct testnode
{
    int x;
    int y;
}data2; // struct name;

typedef struct node 
{
    int data;
    struct node * next;
    struct node * prev;
}list_t;

list_t *crnode(list_t *ptr, int data);
list_t print_l(list_t *head);
void list_free(list_t *head);

int main()
{
    list_t *head = NULL;
    list_t *newnode;

    head = malloc(sizeof(list_t));
    head->data = 10;
    head->next = NULL;
    head->prev = NULL;

    newnode = crnode(head, 11);
    newnode = crnode(newnode, 12);
    newnode = crnode(newnode, 13);
    newnode = crnode(newnode, 14);
    newnode = crnode(newnode, 15);
    print_l(head);

    list_free(head);
    return 0;
}

list_t *crnode(list_t *ptr, int data)
{
    list_t *temp = malloc(sizeof(ptr));

    ptr->next = temp;
    temp->next = NULL;
    temp->prev = NULL;
    temp->data = data;
    return(temp);
}

list_t print_l(list_t *head)
{
    list_t *ptr = head;

    while(ptr)
    {
        printf("data: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

void list_free(list_t *head)
{
    list_t *ptr;
    while(head)
    {
        ptr = head;
        head = head->next;
        free(ptr);
    }
}
