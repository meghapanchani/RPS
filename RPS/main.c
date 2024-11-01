#include <stdio.h>
#include <string.h>

char* determineOutcome(const char* player1, const char* player2) {
    printf("Player1: %s, Player2: %s\n", player1, player2);
    return "Invalid";
}

// Temporary main function to resolve linker error
int main() {
    return 0;
}
