#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a+b>c) && (b+c>a) && (a+c>b)){
        printf("\nValid Triangle");
    } else {
        printf("\nInvalid Triangle");
    }

    return 0;
}