
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int size(const char* str) {

    int i=0;

    while(str[i]!='\0') {
        i++;
    }

    return i;
}

int atoi(const char* str) {

    //const char* new_str = (const char*) str;

    int sum = 0;
    int str_size = size(str);


    cout << str[str_size-1] << endl;

    //char* end = str[size(new_str)];


}

int main() {

    char* str = "123";
    //const char* new_str = (const char*) str;

    //cout << size(new_str) << endl;
    atoi(str);

    cin.get();

}
