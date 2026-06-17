#include <stdio.h>

int main(){
    int n;

    printf("Enter the no. of Array Elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Array Elements: ");

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int freq[9] = {0};

    for (int i = 0; i < n; i++){
        if (arr[i] >= 0 && arr[i] <= 9){
            // freq[i]++;
            freq[arr[i]]++;
        }
    }

    printf("\n");
    for (int i = 0; i < 9; i++){
        printf("Frequency of %d in your Array: %d\n", i, freq[i]);
    }

    return 0;
}