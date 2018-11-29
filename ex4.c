#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_complex
{
    double i;
    double r;
} t_complex;

t_complex * c_add(t_complex *op1, t_complex *op2){
    t_complex *c_res = malloc(sizeof(t_complex));

    c_res->r = op1->r+op2->r;
    c_res->i = op1->i+op2->i;

    return c_res;
}

// Je ne suis pas sûr d'avoir bien compris l'énoncé o_O ?

int main(int argc, char *argv[])
{

    t_complex *complex1 = malloc(sizeof(t_complex));
    t_complex *complex2 = malloc(sizeof(t_complex));
    complex1->r = 2.98;
    complex1->i = 11.07;
    complex2->r = 3.23;
    complex2->i = 7.35;

    t_complex *c_resultat = c_add(complex1, complex2);

    printf("%.2f+%.2fi\n", c_resultat->r, c_resultat->i);

	return 0;
}