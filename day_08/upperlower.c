#include <stdio.h>
#include <string.h>

int main(){
    char str1[10] = "HELLO";
    char str2[20] = "faah";


    printf("%s\n", strlwr(str1));
    printf("%s", strupr(str2));

    return 0;
}