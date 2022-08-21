#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} point;

// typedef struct {
//     char * name;
//     int modle;
// } vehicle;

void move(point * p) {
    p->x++;
    p->y++; 
}

int main() {

    // point p;

    // p.x = 10;
    // p.y = 20;

    // draw(p);

    // vehicle myCar;
    // myCar.modle = 2020;
    // myCar.name = "BMW";
    
}