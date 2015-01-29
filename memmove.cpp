
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


void* myMemmove(char* dest, const char* src, int numBytes) {

    void* ptr = &src;

    cout << ptr << endl;
    cout << ptr+1 << endl;

    const char* strptr = src;
    cout << strptr << endl;
    cout << strptr+1 << endl;

    cout << &strptr << endl;
    cout << &strptr+1 << endl;

    cout << sizeof(int) << endl;
}

int main_memmove() {

    char str[] = "memmove can be very useful......";
    //memmove(str+20,str+15,11);

    void* a = str;
    char* b = &str[0];

    void* c = &b;

    cout << a << endl;      //start of string
    cout << &str << endl;   //start of string

    cout << &b << endl;     //address of b
    cout << c << endl;      //address of b

    cout << *b << endl;     //content pointerd to by b

    //myMemmoveF:\dev\github\interview(str+20,str+15,11);

    //cout << strstr(str[15], 11);

    cin.get();
}
