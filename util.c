/*
** EPITECH PROJECT, 2019
** eda
** File description:
** fa
*/
#include "my.h"

void push_beg(node* *head, int val)
{
    node* new_node;

    new_node = malloc(sizeof(node));
    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

void pb(node* *lista, node* *listb, int a)
{
    *lista = deletefirst(*lista);
    push_beg(listb, a);
}
void pa(node* *lista, node* *listb, int a)
{
    *listb = deletefirst(*listb);
    push_beg(lista, a);
}