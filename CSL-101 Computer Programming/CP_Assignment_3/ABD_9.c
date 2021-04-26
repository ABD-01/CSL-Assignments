// Assignment-3
// Q)9

# include <stdio.h>
# include <stdlib.h>

typedef struct
{
    float coeff[50];
    int degree;
} poly;

void readpoly(poly *);
void addpoly(poly *, poly *);
float hernerpoly(poly *, float *);
int main()
{
    system("clear");
    int ch;
    float x;
    poly fx, gx;
    while (1)
    {
        printf("______________________________________________________________\n"
               "\tEnter youir choice:\n"
               "1) Read a polynomial\n"
               "2) Add two polynomials\n"
               "3) Evalute the polynomial (using Horner's Rule)\n"
               "4) To Exit\n"
               "Your Choice : "
              );
        scanf(" %d", &ch);
        system("clear");
        printf("______________________________________________________________\n");
        if (ch == 1)
        {
            readpoly(&fx);
        }
        else if (ch == 2)
        {
            addpoly(&fx, &gx);
        }
        else if (ch == 3)
        {
            printf("\nThe value of P(%.2f) is  %.3f\n", x, hernerpoly(&fx, &x));
        }
        else if (ch == 4)
        {
            return 0;
        }
        else
        {
            printf("\033[31m Invalid Option. Try Again\n");
            printf("\033[0m");
        }
    }
}

void readpoly(poly *f)
{
    printf("Enter the degree of polynomial : ");
    scanf("%d", &f->degree);
    int d = f->degree;
    for (int i = 0; i < d; i++)
    {
        printf("Enter coeficient of X^%d : ", d - i);
        scanf("%f", &f->coeff[i]);
    }
    printf("Enter the constant term : ");
    scanf("%f", &f->coeff[d]);
    printf("The polynomial entered is ");
    for (int i = 0; i < d; i++)
    {
        if (!f->coeff[i])
        {
            continue;
        }
        printf(" %.2f(x^%d) + ", f->coeff[i], d - i);
    }
    printf(" %.2f\n", f->coeff[d]);

}
void addpoly(poly *f, poly *g)
{
    poly added;
    printf("\nEnter Polynomial-1 Values\n\n");
    readpoly(f);
    printf("\nEnter Polynomial-2 Values\n\n");
    readpoly(g);
    if (f->degree != g->degree)
    {
        printf("\nThe degrees of entered polynomials are not equal.\n");
        return;
    }
    int d = f->degree;
    printf("\nThe added polynomial is : ");
    for (int i = 0; i < d; i++)
    {
        added.coeff[i] = f->coeff[i] + g->coeff[i];
        if (!added.coeff[i])
        {
            continue;
        }
        printf(" %.2f(x^%d) + ", added.coeff[i], d - i);
    }
    printf(" %.2f\n", added.coeff[d] = f->coeff[d] + g->coeff[d]);
}
float hernerpoly(poly *f, float *x)
{
    readpoly(f);
    printf("\nEnter the value of X : ");
    scanf("%f", x);
    float res = f->coeff[0];
    for (int i = 1; i <= f->degree; i++)
    {
        res = (res * (*x)) + f->coeff[i];
    }
    return res;
}
