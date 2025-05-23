#include <stdio.h>

void jolly_good(void);
void second_fn(void);

int main(void) {
    jolly_good();
    jolly_good();
    jolly_good();
    second_fn();
}

void jolly_good(void) {
    printf("For he's a jolly good fellow!\n");
}

void second_fn(void) {
    printf("Which nobody can deny!\n");
}