// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.

// Calculate percentage and grade according to following:

// Percentage >= 90% : Grade A Percentage
// >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include <stdio.h>

int main() {
    int phy, chem, bio, maths, comp;
    float percentage;

    printf("Enter marks of Physics: ");
    scanf("%d", &phy);

    printf("Enter marks of Chemistry: ");
    scanf("%d", &chem);

    printf("Enter marks of Biology: ");
    scanf("%d", &bio);

    printf("Enter marks of Mathematics: ");
    scanf("%d", &maths);

    printf("Enter marks of Computer: ");
    scanf("%d", &comp);

    percentage = (phy + chem + bio + maths + comp) / 5.0;

    printf("Percentage = %.2f\n", percentage);

    if(percentage >= 90)
        printf("Grade A");

    else if(percentage >= 80)
        printf("Grade B");

    else if(percentage >= 70)
        printf("Grade C");

    else if(percentage >= 60)
        printf("Grade D");

    else if(percentage >= 40)
        printf("Grade E");

    else
        printf("Grade F");

    return 0;
}