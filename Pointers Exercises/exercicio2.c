#include <stdio.h>

/* Escreva um programa que contenha duas variaveis inteiras. Compare seus endere�os e 
exiba o maior endere�o.
*/

int main(){
    int x, y;
    printf("endereco x = %p\n", &x);
    printf("endereco y = %p\n", &y);
    &x > &y ? printf("endereco maior: x = %p", &x) : printf("endereco maior: y = %p", &y);
    return 0;
}