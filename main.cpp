#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct btreenode {

    int data;
    struct btreenode* left;
    struct btreenode* right;

} node;

int main() {

    node root;
    root.data = 2;
    root.left = 0;
    root.right = 0;

    node left;
    left.data = 1;
    root.left = &left;      //read only


    node* right = (node*) malloc(sizeof(node));     //dynamic
    root.right = (node*) right;

    cout << root.left << endl;
    cout << root.right << endl;

    //cout << sizeof(struct btreenode) << endl;

    cin.get();

}
