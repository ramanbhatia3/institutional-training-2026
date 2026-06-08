#include <stdio.h>

int main(){
    int a, b;
    char op;

    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("Enter operator: ");
    scanf(" %c",&op);


    switch(op){
        case '+':
            printf("%d", a+b);
            break;

        case '-':
            printf("%d", a-b);
            break;

        case '*':
            printf("%d", a*b);
            break;

        case '/':
            printf("%d", a/b);
            break;

        case '%':
            printf("%d", a%b);
            break;

        default:
            printf("Invalid Operation");

    }


    return 0;
}