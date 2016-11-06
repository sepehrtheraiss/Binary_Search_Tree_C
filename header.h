//
// Created by Blue on 9/20/16.
//

#ifndef BST_HEADER_H
#define BST_HEADER_H

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
typedef struct node node;
void insert(node** leaf,int data);
void printInOrder(node** leaf);
#endif //BST_HEADER_H
