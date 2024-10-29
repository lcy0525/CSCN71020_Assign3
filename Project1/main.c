#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "main.h"

const char* game(const char Player1[], const char Player2[]) {
    if ((strcmp(Player1, "Rock") != 0 && strcmp(Player1, "Paper") != 0 && strcmp(Player1, "Scissors") != 0) ||
        (strcmp(Player2, "Rock") != 0 && strcmp(Player2, "Paper") != 0 && strcmp(Player2, "Scissors") != 0)) 
        return "Invalid";

    if (strcmp(Player1, Player2) == 0)
        return "Draw";

    if (strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Paper") == 0)
        return "Player2";

    else if (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Rock") == 0)
        return "Player1";

    if (strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Scissors") == 0)
        return "Player1";

    else if (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Rock") == 0)
        return "Player2";

    if (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Scissors") == 0)
        return "Player2";

    else if (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Paper") == 0)
        return "Player1";
}

int main(void)
{
    char Player1[10];
    char Player2[10];
    printf("Player1 input(Rock,Scissors or Paper): ");
    scanf("%s", Player1);
    printf("Player2 input(Rock,Scissors or Paper): ");
    scanf("%s", Player2);
    
    const char* Result = game(Player1, Player2);
    printf("%s\n", Result);

    return 0;
}