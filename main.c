#include <stdio.h>
#include "stack.h"

int main() {
    Stack stack = { NULL };

    printf("Pushing 10\n");
    push(&stack, 10);
    printf("Top element: %d\n", peek(&stack));

    printf("Pushing 20\n");
    push(&stack, 20);
    printf("Top element: %d\n", peek(&stack));

    printf("Pushing 30\n");
    push(&stack, 30);
    printf("Top element: %d\n", peek(&stack));

    printf("Popping top element: %d\n", pop(&stack));
    printf("Top element: %d\n", peek(&stack));

    printf("Popping top element: %d\n", pop(&stack));
    printf("Top element: %d\n", peek(&stack));

    printf("Popping top element: %d\n", pop(&stack));
    if (isEmpty(&stack)) {
        printf("Stack esta vacio\n");
    }
    //con esto se vacia el stack para evitar memory leaks (PD: Creo que se entiende mejor si escribo los prints en ingles la traduccion suena mal)
    freeStack(&stack);

    return 0;
}