#include <stdio.h>
#include <stdlib.h>

void addone(int *a) {
    *a += 1;
    return;
}

int main() {
    int a = 1;
    printf("the value of a is : %d \n", a);
    addone(&a);
    printf("the value of a now is : %d \n", a);
}