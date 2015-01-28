
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct btreenode {

    int data;
    struct btreenode* left;
    struct btreenode* right;

} node;

node* insertLeft(node* root, int data) {

    node* newNode = (node*) malloc(sizeof(node));
    newNode->data = data;
    newNode->left = 0;
    newNode->right = 0;

    cout << "inserting " << data << " to the left of node " << root->data << endl;
    root->left = newNode;
};

int main() {

    //create root
    node* root = (node*) malloc(sizeof(node));
    root->data = 2;
    root->left = 0;
    root->right = 0;

    //create left
    node left;          //on the stack
    left.data = 1;

    //create right
    node* right = (node*) malloc(sizeof(node));     //on the heap
    right->data = 3;

    //attach left and right to root
    root->left = &left;
    root->right = (node*) right;

    //print their values
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    //insert using funtion - by reference
    insertLeft(&left, 25);
    cout << left.left->data << endl;

    //insert using function - by pointer
    insertLeft(right, 50);
    cout << right->left->data << endl;

    cin.get();

}
