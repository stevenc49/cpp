#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct node {

    int data;
    node *left, *right;


} Node;

//helper constructor
Node *newNode(int data) {

    node* root = (node*) malloc(sizeof(node));
    root->data = data;
    return root;
}

int main() {

    //node* root = (node*) malloc(sizeof(node));

    Node* root = newNode(2);

    return 0;

}
