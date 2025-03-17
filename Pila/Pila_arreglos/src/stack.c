#include "stack.h"
#include <stdio.h>

Stack stack_create(){
  stack a;
  s.top = -1;
  return a;
}

void stack_push(Stack* a, Data d){
  if (s->top < MAX_SIZE - 1) {
        a->top++;
        a->data[s->top] = d;
    } else {
        printf("Pila llena.\n");
    }
}
Data stack_pop(Stack* s)
if (a->top >= 0) {
        return a->data[a->top--];
    } else {
        printf(" Pila vacía.\n");
        return -1; 
    }
}
int stack_is_empty(Stack* a){
stack_is_empty(Stack* a) {
    if (a == NULL) {
        return -1;
    }
    return (a->top == -1);
}

void stack_empty(Stack* a){
    if (a != NULL) {
        a->top = -1;
    }
}

void stack_print(Stack *s){
 if (s == NULL || s->top == -1) {
        printf("La pila está vacía.\n");
        return;
    }
    printf("Elementos de la pila:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d\n", s->data[i]);
    }
}
