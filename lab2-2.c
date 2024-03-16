#include<stdio.h>
#include<math.h>
int main() {

    int x, y, z;
    double f;

    printf("Ведіть значення x = ");
    scanf("%d", &x);

    printf("Ведіть значення y = ");
    scanf("%d", &y);
    
    printf("Ведіть значення z = ");
    scanf("%d", &z);

    f =(double)(((x + y)) / (pow(x,2) + x * y + pow(y,2))) + (sin (x) / (1 + pow(y,2))) + ((cos(y)) / (1 + pow(x,2)));

    printf("f = %.2f", f);
    return 0;
}