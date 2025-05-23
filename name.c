#include <stdio.h>

int main(void) {
    char f_name[100];
    char l_name[100];

    printf("Please enter your First name\n");
    scanf("%s", f_name);

    printf("Please enter your last name\n");
    scanf("%s", l_name);

    printf("%s %s\n", f_name, l_name);
    printf("%s\n%s\n", f_name, l_name);
    printf("%s", f_name);
    printf(" %s\n", l_name);
}