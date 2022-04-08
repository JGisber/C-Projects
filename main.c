#include <stdio.h>
#include "node.c"

int main(void)
{
    Node *head = malloc(sizeof(Node));
    head->data = 45;
    head->link = NULL;

    Node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 35);
    ptr = add_at_end(ptr, 67);
    ptr = add_at_end(ptr, 52);

    ptr = head;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    return 0;
}