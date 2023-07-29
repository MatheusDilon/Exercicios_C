#include <stdio.h>
#include <string.h>

struct Player{
    char name[12];
    int score;
};

int main(){
    struct Player player1;

    strcpy(player1.name, "Fulano");
    player1.score = 12;

    printf("%s\n%d", player1.name, player1.score);
    
    return 0;
}