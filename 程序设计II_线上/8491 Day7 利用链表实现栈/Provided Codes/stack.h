typedef struct Node{
    int val;
    struct Node* next;
} node;

typedef struct {
    int size;
    node* top;
} Stack;

void InitiateStack(Stack*);
void push(Stack*, const int);
void pop(Stack*);
int empty(const Stack*);
int top(const Stack*);
int size(const Stack*);