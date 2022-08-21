#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 1;
    int * pointer_to_a = &a;
    a += 1;
    *pointer_to_a += 1;

    printf("the value of a is : %d \n", a);
    printf("the pointer to a is : %p \n", pointer_to_a);
}