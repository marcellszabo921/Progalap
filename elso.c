#include <stdio.h>
#include <math.h>


// Single line comment
/*
 Multi
 Line
 Comment
*/

int main(int argc, char const *argv[])
{
 
    double r;

    printf("Radius: ");
    scanf("%lf",&r);
    double circumfence =2*r*M_PI;
    double area = pow(r,2)*M_PI;
    printf("pi: %lf A: %lf C: %lf",M_PI,area,circumfence);

    return 0;
}
