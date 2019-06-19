#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};

void InsertNode(struct Node **head, int value)
// In InsertNode, head -> previous(-> struct Node) -> new(-> struct Node) -> current(-> struct Node)...
// So we use double pointer '**head' here.
// In main, head -> struct Node -> struct Node -> ...
// So we use single pointer '*head' there.
// To pass the parameter, we need use '&' to degrade it(&head). *(&head) = head, **(&head) = *head.
{
    struct Node *previous;
    struct Node *current;
    struct Node *new_;

    current = *head;
    previous = NULL;
    // 'NULL' is a empty address, but not a value. So there is no '*previous = NULL'.

    while (current != NULL && current -> value < value) // current -> value: the value of the struct that 'current' points to
    // The 'while' loop makes sure the program always judges the value.
    // At the same time, 'current' moves a step towards right each time, until it doesn't meet the judgement conditon.
    {
        previous = current; // 'Previous' recorded the previous node of 'current'.
        current = current -> next;
        // Here only the pointer (or the name of each struct) moves right, not the struct.
    }

    new_ = (struct Node *)malloc(sizeof(struct Node));
    if (new_ == NULL)
    {
        printf("RAM allocation failed!\n");
        exit(1);
    }

    new_ -> value = value;
    new_ -> next = current;

    if (previous == NULL)
    {
        *head = new_;
    }
    else
    {
        previous -> next = new_;
    }
}

void DeleteNode(struct Node **head, int input)
{
    struct Node *previous;
    struct Node *current;

    current = *head;
    previous = NULL;

    while (current != NULL && current -> value != input)
    {
        previous = current;
        current = current -> next;
    }

    if (current == NULL)
    {
        printf("Sorry, we can't find it.\n");
        return;
    }
    else
    {
        if (previous == NULL)
        {
            *head = current -> next;
        }
        else
        {
            previous -> next = current -> next;
        }
        free(current);
    }
    
}

void PrintNode(struct Node *head)
{
    struct Node *current;

    current = head;
    while (current != NULL)
    {
        printf("%d  ", current -> value);
        current = current -> next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;
    int input;

    printf("Inserting integers test: \n");
    while(1)
    {
        printf("Please enter an integer(-1 to end): ");
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        InsertNode(&head, input);
        PrintNode(head);
    }

    printf("Deleting integers test: \n");
    while(1)
    {
        printf("Please enter an integer(-1 to end): ");
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        DeleteNode(&head, input);
        PrintNode(head);
    }
}