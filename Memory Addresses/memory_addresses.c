#include <stdio.h>

int main(){
    char a = 'x', b = 'y', c = 'z';
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    return 0;
}