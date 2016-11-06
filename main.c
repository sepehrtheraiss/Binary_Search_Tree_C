//
// Created by Blue on 9/20/16.
//

#include"header.h"

int main()
{
    node* root = NULL;

    for(int i= 0;i<10;i++)
    {
        insert(&root,i);
    }
    printInOrder(&root);
    return 0;
}