#include <stdio.h>

#define PI 3.14159

float fatorial(int n);
float Rad(float angulo);
float Sen(float angulo);


float Elev(float base, int exp)
{
    double res = 1.0;

    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

float fatorial(int n)
{
    float fat = 1;
    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

float Sen(float angulo)
{
    float sen = 0, coe, num, den;
    angulo = Rad(angulo); 
    for(int i = 0; i < 10; i++)
    {
        coe = Elev(-1, i);
        num = Elev(angulo, (2 * i + 1));
        den = fatorial(2 * i + 1);
        sen += coe * (num / den);
    }
    return sen;
}

float Rad(float angulo)
{
    return (angulo * (PI / 180));
}

int main()
{
    float angulo = 30.0; 
    float seno = Sen(angulo);

    printf("Angulo %f => sen %f\n", angulo, seno);
    return 0;
}
