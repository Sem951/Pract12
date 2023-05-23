#include <stdio.h>
#include <stdlib.h>
#include "stack_array.h"

#define INIT_SIZE 5


int *stack;
int top = -1;
int size = INIT_SIZE;


/**
 * @brief Pushes data onto the stack
 */
void initArray()
{
    stack = malloc(size * sizeof(int));
}


/**
 * @brief Pushes data onto the stack
 *
 * @param data The data to push
 */
void pushArray(int data)
{
    if (top == size - 1)
    {
        size *= 2;
        stack = realloc(stack, size * sizeof(int));
    }
    stack[++top] = data;
}


/**
 * @brief Removes data from the top of the stack
 *
 * @return The data removed
 */
int popArray()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return 0;
    }
    return stack[top--];
}


/**
 * @brief Prints the stack
 */
void printArray()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}


/**
 * @brief Shows the top of the stack
 *
 * @return The top of the stack or 0 if the stack is empty
 */
int topArray()
{
    if (top != -1)

        return stack[top];
    else
    {
        printf("Stack is empty\n");
        return 0;
    }
}


/**
 * @brief Clears the stack
 */
void clearArray()
{
    top = -1;
}


/**
 * @brief Checks if the stack is empty
 *
 * @return True if the stack is empty
 */
int isEmptyArray()
{
    return top == -1;
}


/**
 * @brief Frees the stack
 */
void freeArray()
{
    free(stack);
}