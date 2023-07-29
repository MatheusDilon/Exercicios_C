#include <stdio.h>
#include <string.h>

struct Player{
    char name[50];
    int score;
};

int main(){
    struct Player player1 = {"Fulano", 10};
    struct Player player2 = {"Beltrano", 5};
    struct Player player3 = {"Ciclano", 40};

    struct Player players[] = {player1, player2, player3};

    for(int i = 0; i < sizeof(players)/sizeof(players[0]); i++){
        printf("%-12s\t", players[i].name);
        printf("%d\n", players[i].score);
    }
    
    return 0;
}