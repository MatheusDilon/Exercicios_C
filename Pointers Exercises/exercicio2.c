#include <stdio.h>

/* Escreva um programa que contenha duas variaveis inteiras. Compare seus enderešos e 
exiba o maior enderešo.
*/

int main(){
    int x, y;
    printf("endereco x = %p\n", &x);
    printf("endereco y = %p\n", &y);
    &x > &y ? printf("endereco maior: x = %p", &x) : printf("endereco maior: y = %p", &y);
    return 0;
}