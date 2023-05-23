#include <stdio.h>
#include <stdlib.h>
#include "stack_list.h"

Node *head = NULL;


/**
 * @brief Pushes data onto the stack
 *
 * @param data The data to push
 */
void pushList(int data)
{
    Node *temp = malloc(sizeof(Node));
    temp->data = data;
    temp->next = head;
    head = temp;
}


/**
 * @brief Removes data from the top of the stack
 *
 * @return The data removed
 */
int popList()
{
    if (head == NULL)
    {
        printf("Stack is empty\n");
        return 0;
    }
    int data = head->data;
    Node *temp = head;
    head = head->next;
    free(temp);
    return data;
}


/**
 * @brief Prints the stack
 */
void printList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


/**
 * @brief Shows the top of the stack
 *
 * @return The top of the stack or 0 if the stack is empty
 */
int topList()
{
    if (head != NULL)
        return head->data;
    else
    {
        printf("Stack is empty\n");
        return 0;
    }
}


/**
 * @brief Clears the stack
 */
void clearList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *next = temp->next;
        free(temp);
        temp = next;
    }
    head = NULL;
}


/**
 * @brief Checks if the stack is empty
 *
 * @return True if the stack is empty or false otherwise
 */
int isEmptyList()
{
    return head == NULL;
}
