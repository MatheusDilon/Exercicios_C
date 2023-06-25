#include <stdio.h>

int main(){
    int val[6] = {0};
    printf("digite 6 valores inteiros: ");
    
    for(int i = 0; i < 6; i++){
        scanf("%d", &val[i]);
    }

    return 0;
}