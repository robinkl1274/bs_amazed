/*
** EPITECH PROJECT, 2025
** bs_amazed
** File description:
** print_data_of_connected_links
*/

#include "graph.h"

void print_data_of_connected_links(link_t *link)
{
    link_t *tmp = link;

    while (tmp->next != NULL) {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
    printf("%d\n", tmp->data);
}