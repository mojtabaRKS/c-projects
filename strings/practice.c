#include <stdio.h>
#include <string.h>

void main() {
    char * first_name = "mojtaba";
    char * last_name = "rakhisi";

    char full_name[100];

    strncat(full_name, first_name, 10);
    strncat(full_name, " ", 10);
    strncat(full_name, last_name, 10);

    printf("full name is : %s \n", full_name);
    printf("full name length is : %li \n", strlen(full_name));

    int is_same = strncmp(first_name, last_name, 100);

    if (is_same == 0) {
        printf("they are same !!!! \n");
    } else {
        printf("oh noooooo !! \n");
    }
}

