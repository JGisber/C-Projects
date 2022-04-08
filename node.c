#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
} Node;


Node *add_at_end(Node *ptr, int data)
{
    Node *temp = malloc(sizeof(Node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}