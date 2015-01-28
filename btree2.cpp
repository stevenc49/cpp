#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct btreenode {

    int data;
    struct btreenode* left;
    struct btreenode* right;

} node;

int main2() {

    node* root = (node*) malloc(sizeof(node));
    root->data = 2;
    root->left = 0;
    root->right = 0;

    node left;          //on the stack
    left.data = 1;

    node* right = (node*) malloc(sizeof(node));     //on the heap
    right->data = 3;

    root->left = &left;
    root->right = (node*) right;

    cout << root->left->data << endl;
    cout << root->right->data << endl;

    //cout << sizeof(struct btreenode) << endl;

    cin.get();

}
