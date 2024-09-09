/*
** EPITECH PROJECT, 2019
** eda
** File description:
** fa
*/
#include "my.h"

node* make_list(int len, int *arr)
{
    node* head = malloc(sizeof(node));
    node* cur = head;

    for (int i = 0; i < len; i++) {
        cur->val = arr[i];
        cur->next = (i < (len - 1)) ?
         malloc(sizeof(node)) : NULL;
        cur = cur->next;
    }
    return head;
}
void push_end(node* head, double b)
{
    int a;

    node* cur = head;
    a = head->val;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = malloc(sizeof(node));
    cur->next->val = b;
    cur->next->next = NULL;
}

node* swap_list(node* head)
{   
    int a;

    a = head->val;
    head->val = head->next->val;
    head->next->val = a;
    return head;
}

void print_ll(node* head){
    node* cur = head;

    while (cur != NULL) {
        my_put_nbr(cur->val);
        cur = cur->next;
    }
}
node *deletefirst(node *head)
{
    node *second;

    if (head == NULL) {
        return NULL;
       } else {
            second = head->next;
            free(head);
            return second;
       }
}