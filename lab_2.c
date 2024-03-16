#include<stdio.h>

int main() {

    int a, b;

    printf("Ведіть перше число = ");
    scanf("%d", &a);

    printf("Ведіть друге число = ");
    scanf("%d", &b);

    int sum = a + b;
    double divide =(double) b / a;
    int product = a * b;

    printf("Сума = %d", sum);
    printf("\nЧастка = %.2lf", divide);
    printf("\nДобуток = %d", product);

    return 0;
}