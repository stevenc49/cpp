/*
    http://www.geeksforgeeks.org/find-sum-left-leaves-given-binary-tree/
*/

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
    root->left = NULL;
    root->right = NULL;
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


//int leftLeavesSum(Node *root)
//{
//    // Initialize result
//    int res = 0;
//
//    // Update result if root is not NULL
//    if (root != NULL)
//    {
//       // If left of root is NULL, then add key of
//       // left child
//       if (isLeaf(root->left))
//            res += root->left->data;
//       else // Else recur for left child of root
//            res += leftLeavesSum(root->left);
//
//       // Recur for right child of root and update res
//       res += leftLeavesSum(root->right);
//    }
//
//    // return result
//    return res;
//}

//int leftLeavesSum(Node *node) {
//
//    static int res = 0;
//
//    //child of leaf
//    if(node!=NULL) {
//
//        cout << node->data << endl;
//
//        if(isLeaf(node)) {
//            cout << node->data << " is leaf" << endl;
//        }
//
//        if(isLeaf(node->left)) {
//            res += node->left->data;
//        }
//
//        leftLeavesSum(node->left);
//        leftLeavesSum(node->right);
//    }
//
//    return res;
//}


//int leftLeavesSum(Node *root) {
//
//    int res = 0;
//
//    if(root != NULL) {
//
//        if(isLeaf(root->left)) {
//            res += root->left->data;
//        }
//        else {
//            res += leftLeavesSum(root->left);
//        }
//
//        res += leftLeavesSum(root->right);
//    }
//
//    return res;
//}


int leftLeavesSum(Node *node) {

    int res = 0;

    //child of leaf
    if(node!=NULL) {

        cout << node->data << endl;

        if(isLeaf(node)) {
            cout << node->data << " is leaf" << endl;
        }

        if(isLeaf(node->left)) {
            res += node->left->data;
        }

        res += leftLeavesSum(node->left);
        res += leftLeavesSum(node->right);
    }

    return res;
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

    cout << endl << "left sum is " << leftLeavesSum(root) << endl;

    return 0;

}
