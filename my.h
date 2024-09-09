/*
** EPITECH PROJECT, 2019
** eda
** File description:
** fa
*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int val;
    struct Node* next;
} node;

int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);
void push_beg(node* *head, int val);
void pb(node* *lista, node* *listb, int a);
void pa(node* *lista, node* *listb, int a);
node *deletefirst(node *head);