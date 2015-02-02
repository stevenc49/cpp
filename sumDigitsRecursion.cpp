//http://stackoverflow.com/questions/7045189/incorrect-output-from-recursive-function-to-compute-sum-of-digits-of-a-number
//http://stackoverflow.com/a/2764802/93004

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int chartoint(char num) {
    return num - '0';
}

int sumDigits(char num[]) {

    return chartoint(num[0]);

}

int main() {

    char num[] = "123";

    cout << sumDigits(num) << endl;

}
