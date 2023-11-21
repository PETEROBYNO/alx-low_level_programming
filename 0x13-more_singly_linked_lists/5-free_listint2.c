#include <stdio.h>
#include <lists.h>
#include <stdlib.h>

typedef struct listint_s {
    int data;
    struct listint_s *next;
} listint_t;

void free_listint2(listint_t **head) {
    listint_t *current = *head;
    listint_t *temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }

    *head = NULL; // Set the head pointer to NULL after freeing all nodes
}

// Example usage
int main() {
    // Create a sample list
    listint_t *head = malloc(sizeof(listint_t));
    head->data = 1;

    head->next = malloc(sizeof(listint_t));
    head->next->data = 2;

    head->next->next = malloc(sizeof(listint_t));
    head->next->next->data = 3;

    head->next->next->next = NULL;

    // Free the list and set head to NULL
    free_listint2(&head);

    // After freeing, the head should be NULL
    if (head == NULL) {
        printf("List has been freed successfully.\n");
    } else {
        printf("List has not been freed properly.\n");
    }

    return 0;
}
