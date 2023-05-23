#ifndef STACK_LIST_H
#define STACK_LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void pushList(int data);
int popList();
void printList();
int topList();
void clearList();
int isEmptyList();

#endif
