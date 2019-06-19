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
    // 'NULL' is an empty address, but not a value. So there is no '*previous = NULL'.

    while (current != NULL && current -> value < value) // current -> value: the value of the struct that 'current' points to
    // The 'while' loop makes sure the program always judges the value.
    // At the same time, 'current' moves a step towards right each time, until it doesn't meet the judgement conditon.
    {
        previous = current; // 'Previous' recorded the previous node of 'current'.
        current = current -> next;
        // Here only the pointer (the name of each node) moves right, not the node.
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
}