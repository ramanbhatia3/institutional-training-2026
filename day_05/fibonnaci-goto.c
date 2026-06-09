// fibonnaci using goto statement

#include <stdio.h>

int main(){
    int first = 0;
    int second = 1;

    printf("%d %d ", first, second);

    int i = 1;

    loop:
        if (i <= 8){
            int third = first + second;
            printf("%d ", third);

            first = second;
            second = third;

            i++;
            goto loop;
        }

    return 0;
}

// 0 1 1 2 3 5 8 13 21 34