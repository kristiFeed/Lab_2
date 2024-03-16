#include<stdio.h>
#include<math.h>
int main() {

    int a, b, c;
    double y;

    printf("Ведіть значення a = ");
    scanf("%d", &a);

    printf("Ведіть значення b = ");
    scanf("%d", &b);
    
    printf("Ведіть значення c = ");
    scanf("%d", &c);

    y = (double) ((2 * a + 1 + c) / b) - ((3 * b + c) / c);

    printf("y= %f", y);
    return 0;
}