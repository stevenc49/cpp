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

    Node* root = newNode(20);

    root->left = newNode(9);
    root->left->left= newNode(5);
    root->left->right = newNode(12);
    root->left->right->right = newNode(15);

    root->right = newNode(49);
    root->right->left = newNode(23);
    root->right->right = newNode(52);
    root->right->right->left = newNode(50);

    return 0;

}
