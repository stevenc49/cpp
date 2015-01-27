#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct btreenode {

    int data;
    struct btreenode* left;
    struct btreenode* right;

} node;

int _main() {

    node root;
    root.data = 2;
    root.left = 0;
    root.right = 0;

    node left;
    left.data = 1;
    root.left = &left;      //on the stack

    node* right = (node*) malloc(sizeof(node));     //on the heap
    right->data = 3;
    root.right = (node*) right;

    cout << root.left->data << endl;
    cout << root.right->data << endl;

    //cout << sizeof(struct btreenode) << endl;

    cin.get();

}
