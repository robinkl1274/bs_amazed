/*
** EPITECH PROJECT, 2025
** bs_amazed
** File description:
** create_link
*/

#include "graph.h"

link_t *create_link(int data)
{
    link_t *new = malloc(sizeof(link_t));

    new->data = data;
    new->next = NULL;
    return new;
}
