#include <stdio.h>

int main(){
    int a,r,n;

    printf("Enter the value of initial term (a): ");
    scanf("%d", &a);

    printf("Enter the value of difference (r): ");
    scanf("%d", &r);

    printf("Enter total no. of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        printf("%d ", a);
        a = a*r;
    }

    return 0;
}