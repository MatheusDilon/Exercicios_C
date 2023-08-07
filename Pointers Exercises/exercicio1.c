#include <stdio.h>

/* Escreva um programa que declare um inteiro, um real e um char, 
e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de
cada variavel usando os ponteiros. Imprima os valores das variaveis antes e após a 
modificação. */

int main(){
    int x = 10;
    float y = 5.8;
    char z = 'z';

    printf("x = %d\n", x);
    printf("y = %.1f\n", y);
    printf("z = %c\n", z);

    int *px = &x;
    float *py = &y;
    char *pz = &z;

    *px += 20;
    *py += 5.2;
    *pz = 'a';

    printf("x = %d\n", x);
    printf("y = %.2f\n", y);
    printf("z = %c\n", z);

    return 0;
}