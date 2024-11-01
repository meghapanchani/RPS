#include <stdio.h>
#include <string.h>

char* determineOutcome(const char* player1, const char* player2) 
{
    printf("Player1: %s, Player2: %s\n", player1, player2);

    // Test 1
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) 
    {
        return "Player1";
    }

    // Test 2
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Paper") == 0) {
        return "Player2";
    }

    // Test 3
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }

    // Test 4
    if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) {
        return "Player1";
    }

    // Test 5
    if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Scissors") == 0) {
        return "Player2";
    }

    // Test 6
    return "Invalid";

    return "Fail";
}


int main() {
    return 0;
}
