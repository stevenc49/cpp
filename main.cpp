#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct btreenode {

    int data;
    struct btreenode* left;
    struct btreenode* right;

};

int main() {

    struct btreenode root;
    root.data = 2;
    root.left = 0;
    root.right = 0;

    struct btreenode left;
    left.data = 1;

    //root.left = (struct btreenode) malloc(sizeof(left));
    root.left = &left;

    cout << root.left << endl;
    cout << root.right << endl;

    cin.get();

}
