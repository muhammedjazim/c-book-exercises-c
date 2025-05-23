#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    char address[100];
    printf("Please enter your name\n");
    fgets(name, sizeof(name), stdin);

    printf("Please enter your address\n");
    fgets(address, sizeof(address), stdin);

    printf("The name is %s\n", name);
    printf("address is %s\n", address);
}