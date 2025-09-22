#include <stdio.h>

int main()
 {
    int age;
    float salary;
    char initial;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter your first initial: ");
    // Note: A space before %c can consume any leftover newline character from previous inputs.
    scanf(" %c", &initial); 

    printf("\nYour age is: %d\n", age);
    printf("Your salary is: %.2f\n", salary);
    printf("Your initial is: %c\n", initial);

    return 0;
}