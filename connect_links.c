/*
** EPITECH PROJECT, 2025
** bs_amazed
** File description:
** connect_links
*/

#include "graph.h"

void connect_links(link_t *link1, link_t *link2)
{
    if (!link1 || !link2)
        return;
    link1->next = link2;
}