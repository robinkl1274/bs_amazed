/*
** EPITECH PROJECT, 2025
** bs_amazed
** File description:
** graph
*/

#ifndef GRAPH_H_
    #define GRAPH_H_

    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>

typedef struct link {
    int data;
    struct link *next;
} link_t;

link_t *create_link(int data);
void print_link(link_t *link);
void connect_links(link_t *link1, link_t *link2);
void print_data_of_connected_links(link_t *link);

#endif