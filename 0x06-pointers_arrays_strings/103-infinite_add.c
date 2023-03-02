#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* infinite_add(char* n1, char* n2, char* r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);

    if (len1 > size_r || len2 > size_r) {
        return 0; // result does not fit in buffer
    }

    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        if (k >= size_r - 1) {
            return 0; // result does not fit in buffer
        }

        r[k] = digit + '0';
        k++;

        i--;
        j--;
    }

    r[k] = '\0';
    strrev(r); // reverse the result

    return r;
}
