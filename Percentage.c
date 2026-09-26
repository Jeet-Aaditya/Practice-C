#include <stdio.h>

int main()
{
    float physics, chemistry, biology, mathematics, computer;
    char ch;
    printf("Enter marks obtained in Physics: ");
    scanf("%f", &physics);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks obtained in Biology: ");
    scanf("%f", &biology);
    printf("Enter marks obtained in Mathematics: ");
    scanf("%f", &mathematics);
    printf("Enter marks obtained in Computer: ");
    scanf("%f", &computer);
    float total = physics + chemistry + biology + mathematics + computer;
    float percentage = (total / 500) * 100;
    if(percentage >= 90)
        printf("Grade: A\n");
    else if(percentage >= 80)
        printf("Grade: B\n");
    else if(percentage >= 70)
        printf("Grade: C\n");
    else if(percentage >= 60)
        printf("Grade: D\n");
    else if(percentage >= 40)
        printf("Grade: E\n");
    else
        printf("Grade: F\n");
    return 0;
}