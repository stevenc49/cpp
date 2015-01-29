
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void* mymemmove2(void* dest, const void* src, int size) {

    //void* a = &src;
    //void* b = &dest;

    for(int i=0; i<size; i++) {

        //cout << *src << endl;
        dest = (void*)src;

        src+=1;
        dest+=1;
    }

}

int main() {

    char str[] = "memmove can be very useful......";

    mymemmove2(&str[15],&str[20],5);

    cout << str << endl;

    cin.get();
}
