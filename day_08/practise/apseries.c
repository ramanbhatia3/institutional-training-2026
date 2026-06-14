#include <stdio.h>

int main(){
    int a,d,n;

    printf("Enter the value of initial term (a): ");
    scanf("%d", &a);

    printf("Enter the value of difference (d): ");
    scanf("%d", &d);

    printf("Enter total no. of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        // printf("%d ", a+(i-1)*d);
        printf("%d ", a);
        a += d; 
    }

    return 0;
}