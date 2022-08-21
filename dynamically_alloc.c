#include <stdlib.h>

typedef struct {
    char * name;
    int age;
} person;

int main() {
    person * mojtaba = (person *) malloc(sizeof(person));

    mojtaba->name = "mojtaba";
    mojtaba->age = 29;

    free(mojtaba);
}