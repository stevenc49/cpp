
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

/*
*   this is a char* version, memmove should be void*
*
*   memmove can be very very very ve
*   to fix: http://stackoverflow.com/a/3572519
*/
void* mymemmove2(void* dest, const void* src, int size) {

    //void* a = &src;
    //void* b = &dest;

    if(src<dest) {

        //put pointer at end of str+size
        char* ptr = (char*)src + size - 1;

        //copy up to ptr+(dest-src)
        char* ptr2 = ptr + ((char*)dest-(char*)src);

        *ptr2 = *ptr;

        for(int i=0; i<size; i++) {
            ptr2--;
            ptr--;

            *ptr2 = *ptr;
        }
    }

    /*
    for(int i=0; i<=size; i++) {

        //cout << *src << endl;
        *dest = *src;

        src+=1;
        dest+=1;
    }
    */
}

int main_memmove2
() {

    char str[] = "memmove can be very useful......";

    //memmove(&str[20],&str[15],11);
    mymemmove2(&str[20],&str[15],11);

    cout << str << endl;

    cin.get();
}
