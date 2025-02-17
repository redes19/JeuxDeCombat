#include <stdio.h>
#include "player.h"

void startGame()
{
    printf("Hello Player\nWelcome to the game\n");
    Player player;
    CreatePlayer(&player);

    freePlayer(&player);
}

int main() {
    printf("Hello, World!\n");
    startGame();
    return 0;
}