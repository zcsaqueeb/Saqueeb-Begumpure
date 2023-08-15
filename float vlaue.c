#include <stdio.h>
#define pf printf

float add(float x, float y) // The function should return a float value
{
    float z;
    z = x + y;
    pf("add is %.2f",z); // The format specifier should be %.2f to display the float value with 2 decimal places
}

int main()
{
    float a,b;
    pf("enter 2 no.s : \n");
    scanf("%f %f",&a,&b); // The format specifier should be %f to read float values
    add(a,b);
    return 0;
}