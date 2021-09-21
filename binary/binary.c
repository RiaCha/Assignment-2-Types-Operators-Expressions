#include <stdio.h> /* printf */

int main () {
    char c = 'A';
    int decimal = c;
    int bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7;
    
    bit0 = decimal & 1;
    decimal = decimal >> 1;
    bit1 = decimal & 1;
    decimal = decimal >> 1;
    bit2 = decimal & 1;
    decimal = decimal >> 1;
    bit3 = decimal & 1;
    decimal = decimal >> 1;
    bit4 = decimal & 1;
    decimal = decimal >> 1;
    bit5 = decimal & 1;
    decimal = decimal >> 1;
    bit6 = decimal & 1;
    decimal = decimal >> 1;
    bit7 = decimal & 1;
    decimal = decimal >> 1;
    printf("%d%d%d%d%d%d%d%d\n", bit7, bit6, bit5, bit4, bit3, bit2, bit1, bit0);
    return 0;
}

