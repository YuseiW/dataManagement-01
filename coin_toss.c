#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to simulate a coin toss
char* tossCoin() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
    // Initialize random number generator
    srand(time(0));

    // Ask for the user's name
    char name[50];
    printf("Who are you?\n> ");
    scanf("%49s", name); // Read user input with a maximum of 49 characters to avoid buffer overflow
    printf("Hello, %s!\n", name);

    int headsCount = 0;
    int tailsCount = 0;

    printf("Tossing a coin...\n");

    // Simulate 3 rounds of coin toss
    for (int i = 1; i <= 3; i++) {
        char* result = tossCoin();
        printf("Round %d: %s\n", i, result);

        // Count heads and tails
        if (result == "Heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    // Print the results
    printf("Heads: %d, Tails: %d\n", headsCount, tailsCount);

    // Print the victory message
    if (headsCount > tailsCount) {
        printf("You won\n");
    } else {
        printf("You lost\n");
    }

    return 0;
}
