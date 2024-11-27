#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    int num = 0;
    head = NULL;
    add_node_end(&head, "Anne");
    // add_node_end(&head->col, "Anne");
    // add_node_end(&head->col, "Anne");        
    add_node_end(&head, "Ahmed");
    add_node_end(&head, "Mohamed");
    add_node_end(&head, "Khaled");
    add_node_end(&head, "frontier");
    add_node_end(&head, "summit");
    printf("Number of sets : %ld\n",print_list(head));
    return (0);
}
