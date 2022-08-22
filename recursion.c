#include <stdio.h>

// this silly code is adding number y in x times :)))))
// why we just dont use * operator ? :))))
unsigned int multiply(unsigned int x, unsigned int y) {
    if (x == 1) {
        return y;
    }

    else if (x > 1) {
        return y + multiply(x-1, y);
    } 
    
    return 0;
}

unsigned int factorial(unsigned int x) {
    if (x > 1) {
        return x * factorial(x - 1);
    } else {
        return 1;
    }
}

int main() {

    printf("3 times 5 is : %d", multiply(3, 5));
    return 0;

}