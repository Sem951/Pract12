#include <stdio.h>
#include "stack_array.h"
#include "stack_list.h"
#include "HelperFuncs.h"


void menu(int stackType)
{
    while (1)
    {
        printf("%s\n", stackType == 1 ? "Array\n" : "List\n");
        printf("1. Insert\n"
               "2. Delete\n"
               "3. Print\n"
               "4. Show top\n"
               "5. Clear\n"
               "6. Check if empty\n"
               "0. Exit the menu\n");

        int option;
        option = range_scan(0, 6);

        if (option == 0)
            break;

        int data;
        switch (option)
        {
            case 1:
                system("cls");
                printf("Insert data\n\n"
                       "Enter data");
                data = scan_safe_func_int();
                if (stackType == 1)
                    pushArray(data);
                else
                    pushList(data);
                break;
            case 2:
                system("cls");
                printf("Delete data\n\n"
                       "Enter data");
                if (stackType == 1)
                    popArray();
                else
                    popList();
                break;
            case 3:
                system("cls");
                printf("Print\n\n");
                if (stackType == 1)
                    printArray();
                else
                    printList();
                break;
            case 4:
                system("cls");
                printf("Show top\n\n");
                if (stackType == 1)
                    printf("%d\n", topArray());
                else
                    printf("%d\n", topList());
                break;
            case 5:
                system("cls");
                if (stackType == 1)
                    clearArray();
                else
                    clearList();
                printf("Clear complete\n\n");
                break;
            case 6:
                system("cls");
                if (stackType == 1)
                    printf("%s\n", isEmptyArray() ? "Stack is empty" : "Stack is not empty");
                else
                    printf("%s\n", isEmptyList() ? "Stack is empty" : "Stack is not empty");
                break;
        }
        system("pause");
    }
}


int main()
{
    initArray();

    while (1)
    {
        system("cls");
        printf("\n1. Stack through array\n");
        printf("2. Stack via singly linked linear list\n");
        printf("0. Exit\n");
        int option;
        option = range_scan(0, 2);

        if (option == 0)
            break;

        menu(option);
    }

    freeArray();
    clearList();

    return 0;
}
