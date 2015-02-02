#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct node {

    int data;
    node *left, *right = NULL;


} Node;

//helper constructor
Node *newNode(int data) {

    node* root = (node*) malloc(sizeof(node));
    root->data = data;
    return root;
}

bool isLeaf(Node* node) {

    if(node==NULL) {    //child of leaf
        return false;
    }
    if(node->left==NULL && node->right==NULL) {
        return true;
    }
    return false;
}

int leftLeavesSum(Node *root) {

    int res = 0;

    if(root != NULL) {

        if(isLeaf(root->left)) {
            res += root->left->data;
        }
        else {
            res += leftLeavesSum(root->left);
        }

        res += leftLeavesSum(root->right);
    }

    return res;
}

/*
int leftLeavesSum(Node *node) {

    int res = 0;

    cout << node->data << endl;


    //child of leaf
    if(node!=NULL) {

        if(isLeaf(node)) {
            return node->data;
        }
        else {
            return leftLeavesSum(node->left) + leftLeavesSum(node->right);
        }

    }
    else {
        return 0;
    }

    return res;
}
*/

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

    cout << leftLeavesSum(root) << endl;

    return 0;

}
