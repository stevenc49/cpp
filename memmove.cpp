
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


void* myMemmove(char* dest, const char* src, int numBytes) {

    //void* src;

}

int main() {

    char str[] = "memmove can be very useful......";
    memmove(str+20,str+15,11);
    puts (str);

    char* ptr = &str[0];
    cout << &ptr << endl;
    cout << &ptr+1 << endl;

    //cout << strstr(str[15], 11);

    cin.get();
}
