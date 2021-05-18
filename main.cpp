#include <stdio.h>
#include <stdlib.h>



struct node
{
    int data;
    struct node* left;
    struct node* right;
};

void swapChildren(node* n) {
    if (n->left != NULL) {
        swapChildren(n->left);
    }
    if (n->right != NULL) {
        swapChildren(n->right);
    }
    if (n->left != NULL && n->right != NULL) {
        set_children(n, n->right, n->left);
    }
}

void set_children(node* root, node* leftt, node* rightt)
{
    root->left = leftt;
    root->right = rightt;
}
