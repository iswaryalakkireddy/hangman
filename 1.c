#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "hangman";        // word to guess
    int length = strlen(word);
    char guess[20];                 // stores correct guesses
    int tries = 6;                  // number of allowed wrong guesses
    int correct = 0;
    char letter;
    int i;

    // fill guess array with '_'
    for (i = 0; i < length; i++) {
        guess[i] = '_';
    }

    printf("=== HANGMAN GAME ===\n");

    while (tries > 0 && correct < length) {
        printf("\nWord: ");
        for (i = 0; i < length; i++) {
            printf("%c ", guess[i]);
        }

        printf("\nTries left: %d\n", tries);
        printf("Enter a letter: ");
        scanf(" %c", &letter);

        int found = 0;

        // check if letter exists in the word
        for (i = 0; i < length; i++) {
            if (word[i] == letter && guess[i] == '_') {
                guess[i] = letter;
                correct++;
                found = 1;
            }
        }

        if (!found) {
            printf("Wrong guess!\n");
            tries--;
        }
    }

    if (correct == length) {
        printf("\nCongratulations! You guessed the word: %s\n", word);
    } else {
        printf("\nGame Over! The word was: %s\n", word);
    }

    return 0;
}
