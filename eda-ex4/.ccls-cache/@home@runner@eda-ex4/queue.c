#include <stdlib.h>
#include "queue.h"

void initialize(queue *q) {
    // implementar
}

void destroy(queue *q) {
    while(!empty(q))
        pop(q);
}

void* front(queue *q) {
    if(!empty(q))
        return q->first->data;
    return 0;
}

void push(queue *q, void* data) {
    // implementar
}

void pop(queue *q) {
    // implementar
}

int empty(queue *q) {
    return q->first == 0;
}