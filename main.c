#include <stdio.h>
#include "calculator/calc.c"

int main() {
    printf("welcome to calculator \n");
    printf("you can use these functionalities : \n");
    printf("1. add\n");
    printf("2. sub\n");
    printf("3. multiply\n");
    printf("4. division\n");
    printf("5. power\n");
    printf("6. factorial\n");
    printf("7. sigma\n");
    printf("8. square root\n");
    printf("9. percentage\n\n");

    int action;
    scanf("enter the action number: %d \n", &action);

    print(action);

    // switch (action) {
    //     case 1 :
    //         add();
    //         break;
        
    //     case 2 :
    //         sub();
    //         break;
        
    //     case 3 :
    //         mul();
    //         break;
        
    //     case 4 :
    //         div();
    //         break;

    //     case 5 :
    //         power();
    //         break;

    //     case 6 :
    //         factorial();
    //         break;

    //     case 7 :
    //         sigma();
    //         break;

    //     case 8 :
    //         square_root();
    //         break;

    //     case 9 :
    //         percentage();
    //         break;

    //     default :
    //         printf("asction is invalid !");
    // };

    return 0;
}