#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(Stack* stack, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Error: No se asigno memoria para el nuevo nodo\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    Node* temp = stack->top;
    int poppedData = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return poppedData;
}

int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack vacio\n");
        exit(EXIT_FAILURE);
    }
    return stack->top->data;
}

int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

void freeStack(Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
}