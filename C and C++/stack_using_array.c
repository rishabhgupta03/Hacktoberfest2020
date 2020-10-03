//STACK IMPLEMENTETION USING ARRAY #include <stdio.h> #include <stdlib.h> #define MAX 5

struct node
{
    int data;
    struct node *link;
} *top = NULL;

int st_count()
{
    int count = 0;
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        temp = temp->link;
        count++;
    }
    return count;
}

void stack_full()
{
    if (st_count() == MAX)
        printf("stack full\n");
    else
        printf("stack empty\n");
}

void stack_empty()
{
    if (top == NULL)
        printf("STACK IS EMPTY\n");
    else
        printf("elements are present, stack is not empty \n");
}

void push()
{
    int val, count;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    count = st_count();
    if (count <= MAX - 1)
    {
        printf("\nEnter value which you want to push into the stack :\n");
        scanf("%d", &val);
        temp->data = val;
        temp->link = top;
        top = temp;
    }
    else
        printf("WARNING: STACK FULL\n");
}

// to delete elements from stack void pop() {     struct node *temp;     if (top == NULL)         printf("*Stack is empty*\n");     else     {         temp = top;         printf("Value popped out is %d \n", temp->data);         top = top->link;         free(temp);     } }

// to print top element of stack void print_top() {     if (top == NULL)         printf("\n*Top is not available for an EMPTY stack*");     else         printf("\nTop of the stack is %d ", top->data); }

int main()
{
    int ch;

    while (1)
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("ENTER ANY CHOICE: ");
        scanf("%d", &ch);
        switch (ch)
        { //PUSH         case 1:         {             push();             break;         }         //POP         case 2:         {             pop();             break;         }         //DISPLAY         case 3:         {             print_top();             break;         }         //EXIT         case 4:         {             printf("TERMINATING..\n");             break;         }         default:         {             printf("ENTER VALID CHOICE\n");             break;         }         }     }     return 0; }