/*
** EPITECH PROJECT, 2025
** bs_amazed
** File description:
** print_link
*/

#include "graph.h"

void print_link(link_t *link)
{
    if (link)
        printf("%d\n", link->data);
    else
        printf("link is null\n");
}
