#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    int max = a;

    if (b > max){
        max = b;
    }

    if (c > max){
        max = c;
    }

    printf("Max: %d", max);


    return 0;
}