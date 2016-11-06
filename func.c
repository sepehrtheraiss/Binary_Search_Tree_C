//
// Created by Blue on 9/20/16.
//
#include "header.h"

void insert(node** leaf,int data)
{
    if(*leaf != NULL)
    {
        if(data > (*leaf)->data)
        {
            insert(&(*leaf)->right,data);
        }
        else
        {
            insert(&(*leaf)->left,data);
        }

    }
    else
    {
        *leaf =(node*) malloc(sizeof(struct node));
        (*leaf)->data = data;
        (*leaf)->left = (*leaf)->right = NULL;
    }
}
void printInOrder(node** leaf)
{
    if(*leaf != NULL)
    {
        printInOrder(&(*leaf)->left);
        printf("value: %i\n",(*leaf)->data);
        printInOrder(&(*leaf)->right);

    }
}
