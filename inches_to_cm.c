#include <stdio.h>

int main(void) {
    float inches;
    float cms;

    printf("Please enter the length in inches: \n");
    scanf("%f", &inches);
    
    cms = inches*2.54;

    printf("%0.2f inches is %0.2f cms\n", inches, cms);
}