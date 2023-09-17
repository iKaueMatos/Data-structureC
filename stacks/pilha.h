typedef struct pilha Pilha;

Pilha* createStack();
void push(Pilha* p, float v);
float pop(Pilha* p);
int isEmpty(Pilha* p);
void freeStack(Pilha* p);
float top(Pilha* p);