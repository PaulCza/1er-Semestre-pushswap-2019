/*
** EPITECH PROJECT, 2019
** eda
** File description:
** fa
*/

#include "my.h"

int pushswap(int *arr, int size)
{
    int a;
    int array[] = {0};

    node* lista = make_list(size, arr);
    node* listb = make_list(1, array);
    a = check_order(lista);
    if (a == - 1){
        a = sorter(lista, listb, size);
    }
    return a;
}
int check_order(node* lista)
{
    node* current = lista;

    while (current->next != NULL) {
        if (current->val < current->next->val){
            current = current->next;
        }else {
            return -1;
        }
    }
    return 0;
}
int sorter2(node* lista, node* listb, int a)
{
    while (a != 0){
        my_putchar(' ');
        pa(&lista, &listb, listb->val);
        my_putstr("pa");
        a = a - 1;
    }
}
int sorter(node* lista, node* listb, int size)
{
    node* current = lista;
    int a = 0;
    while (check_order(lista) == -1){
        current = lista;
        if (current->val > current->next->val){
            swap_list(lista);
            my_putstr("sa");
        }else if (current->val < current->next->val){
            pb(&lista, &listb, lista->val);
            my_putstr("pb");
            a = a + 1;
        }
        if (check_order(lista) == -1)
            my_putchar(' ');
        if (check_order(lista) == 0 && a != 0){
            sorter2(lista, listb, a);
        }
    }
    return check_order(lista);
}

int main(int argc, char *argv[])
{
    int array[argc - 1];
    int a = 0;
    int b = 1;

    if (argc == 1)
    return (84);
    while (b <= argc - 1){
        array[a] = atoi(argv[b]);
        a = a + 1;
        b = b + 1;
    }
    b = pushswap(array, a);
    my_putchar('\n');
    if (b == 0)
        return (0);
}        