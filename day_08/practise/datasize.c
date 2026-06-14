#include <stdio.h>

int main (){
    // short = -32768 to 32767
    // 2^-15 to 2^15 - 1

    // short -> 2 bytes -> 16 bits
    // n bits -> 2^n values
    // 16 bits -> 2^16 values -> 65536 values
    // 65536 values -> -32768 to 32767

    // int -> 4 bytes -> 32 bits
    // 2^31 to 2^31 - 1
    // 32 bits -> 2^32 values -> 4294967296 values
    // 4294967296 values -> -2147483648 to 214748364

    // long -> 8 bytes -> 64 bits
    // 2^63 to 2^63 - 1
    // 64 bits -> 2^64 values -> 18446744073709551616 values
    // 18446744073709551616 values -> -9223372036854775808 to 9223372036854775807

    // float -> 4 bytes -> 32 bits
    // double -> 8 bytes -> 64 bits

    // char -> 1 byte -> 8 bits
    // 2^7 to 2^7 - 1
    // 8 bits -> 2^8 values -> 256 values
}