#include <stdio.h>

int add()
{
    int x, y;

    scanf("enter the x %d : \n", &x);
    scanf("enter the y  %d: \n", &y);

    return x + y;
}

int sub()
{

    int x, y;

    scanf("enter the x  %d: \n", &x);
    scanf("enter the y  %d: \n", &y);

    return x - y;
}

int mul()
{
    int x, y;

    scanf("enter the x  %d: \n", &x);
    scanf("enter the y  %d: \n", &y);

    return x * y;
}

int div()
{
    int x, y;

    scanf("enter the x  %d: \n", &x);
    scanf("enter the y  %d: \n", &y);

    if (y == 0)
    {
        printf("division by zero ! \n");
        return 0;
    }

    return x / y;
}

int power()
{

    int x, power, result = 0;

    scanf("enter the x :  %d\n", &x);
    scanf("enter the power :  %d\n", &power);

    for (int i = 1; i <= power; i++)
    {
        result *= x;
    }

    return result;
}

int factorial()
{
    int x;
    scanf("enter the x :  %d\n", &x);

    int result = 1;

    while (x != 0)
    {
        result *= x;
        x--;
    };

    return result;
}

int sigma()
{
    int x, result = 0;
    scanf("enter the x :  %d\n", &x);

    while (x != 0)
    {
        result += x;
        x--;
    };

    return result;
}

float square_root()
{
    int x;
    scanf("enter the x :  %d\n", &x);

    if (x == 0)
    {
        printf("division by zero is invalid \n");
        return 0.0;
    }

    float result;

    result = x / x;

    return result;
}

float percentage()
{
    int x, y, unit;

    scanf("enter the x:  %d \n ", &x);
    scanf("enter the y: %d \n", &y);

    unit = y / 100;
    return y - (x * unit);
}