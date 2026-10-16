#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

#define M_PI 3.14159265358979323846

int task1();
int task2();
int homework();


int main()
{
    setlocale(LC_CTYPE, ".UTF8");
    task1();
    task2();
    homework();
 
    return 0;
}

int task1()
{
    printf("\nЗадание 1\n");
    double gr;
    double rad;
    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);
    rad = gr * M_PI / 180.0;
    printf("sin(%.2f) = %.6f\n", gr, sin(rad));
    return 0;
}

int task2()
{
    printf("\nЗадание 2. Вариант 9\n");

    double x;
    const double k = 7.0; 
    double a;
    double b;
    double y;
    printf("Введите x: ");
    scanf("%lf", &x);
    a = pow((k + x), 3);
    b = log10(fabs(k * x));
    y = b * b + sqrt(fabs(a));

    printf("\nРезультаты вычисления:\n");
    printf("x = %.1f\n", x);
    printf("a = %.4f\n", a);
    printf("b = %.4f\n", b);
    printf("y = %.4f\n", y); 

    printf("\nЗадание 3\n");
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    printf("\nЦелые части:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    int condition1 =
        ((A % 2 == 0) != (B % 2 == 0));
    printf("\nа) Только одно из чисел А и В четное:\n");
    printf("условие выполнено (1 - да, 0 - нет): %d\n", condition1);

    int condition2 =
        (A % 3 == 0) &&
        (B % 3 == 0) &&
        (C % 3 == 0);

    printf("\nб) Каждое из чисел А, В, С кратно трем:\n");
    printf("условие выполнено (1 - да, 0 - нет): %d\n", condition2);

    return 0;
}

int homework() 
{
    double x, y, a, F;
    a = -10.0;
    printf("Введите значение x: ");
    scanf("%lf", &x);
    printf("Введите значение y: ");
    scanf("%lf", &y);
    F = log(fabs((y + sqrt(fabs(x))) * (x - y / (a + (x * x) / 4.0))));
    printf("Результат при x = %g, y = %g: F(x, y) = %.6f\n", x, y, F);
    return 0;
}
