#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct node {

    int data;
    node *left;
    node *right;


} node;

int main() {

    node* root = (node*) malloc(sizeof(node));



    return 0;

}
