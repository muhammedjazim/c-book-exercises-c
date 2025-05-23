#include <stdio.h>

int main(void) {
    int age;
    float days;

    printf("Please enter your age in years\n");

    scanf("%d", &age);

    days = age*364;

    printf("your age is %0.2f days\n", days);
}