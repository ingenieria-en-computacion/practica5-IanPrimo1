#include "cola.h"
#include <stdio.h>
#include <stdbool.h>


Cola queue_create() {
    Cola q;
    c.head = -1;
    c.tail = -1;
    return q;
}


void queue_enqueue(Cola* c, Data d) {
    if ((c->tail + 1) % MAX_SIZE == q->head) {
        printf("Cola llena.\n");
        return;
    }
    if (c->head == -1) {
        c->head = 0;
    }
    c->tail = (c->tail + 1);
    c->data[c->tail] = d;
}

Data queue_dequeue(Cola* c) {
    if (queue_is_empty(c)) {
        printf("Cola vacía.\n");
        return -1; 
    }
    Data value = c->data[c->head];
    if (c->head == c->tail) { 
        c->head = -1;
        c->tail = -1;
    } else {
        q->head = (c->head + 1);
    }
    return value;
}

bool queue_is_empty(Cola* c) {
    return (c->head == -1);
}

Data queue_front(Cola* c) {
    if (queue_is_empty(c)) {
        printf("Cola vacía.\n");
        return -1;
    }
    return c->data[c->head];
}
void queue_empty(Cola* c) {
    c->head = -1;
    c->tail = -1;
}
