#include <stdio.h>
#include <string.h>

void main() {
    char * first_name = "mojtaba";
    char * last_name = "rakhisi";

    char full_name[100];

    strncat(full_name, first_name, -1);
    strncat(full_name, " ", -1);
    strncat(full_name, last_name, -1);

    printf("full name is : %s", full_name);
}

