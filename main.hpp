#ifndef MAIN_HPP
#define MAIN_HPP

// Find the sub string in the original string

#include <iostream>
#include <cstring>
using namespace std;

int finduserstring(char[], int, char[], int);

int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen)
{
    if (cstrlen < userlen) {
        return -1;
    }

    for (int i = 0; i <= cstrlen - userlen; i++) {
        for (int j = 0; j < userlen; j++) {
            if (cstr[i + j] != userstr[j]) {
                return -1;
            }
        }
        return i;
    }
}

#endif
