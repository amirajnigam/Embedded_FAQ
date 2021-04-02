#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void linked_list_traversal(struct Node * ptr){
    while(ptr != NULL){
        printf("Elements:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void remove_duplicate(struct Node *head){
    struct Node *current = head;
    struct Node * temp;

    while(current->next != NULL){
        if(current->data == current->next->data){
            temp = current->next->next;
            free(current->next);
            current->next = temp;
        }
        else
            current = current->next;
    }
}
int main(void)
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));


    head->data = 7;
    head->next =second;

    second->data = 8;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 11;
    fourth->next = NULL;

    printf("Orignal list\n");
    linked_list_traversal(head);

    remove_duplicate(head);

    printf("List After removing duplicates\n");
    linked_list_traversal(head);

    return 0;
}