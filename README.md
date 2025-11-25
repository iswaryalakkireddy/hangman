# hangman
Hangman Game in C
Abstract

This project is a C-based Hangman game that allows the user to guess a hidden word one letter at a time. The program uses character arrays, loops, and conditional logic to check guesses, track progress, and determine whether the player wins or loses.

Features

Word Progress Display
Shows the word using underscores _ for unguessed letters.

Letter Input
User enters a letter, and the program checks if it exists in the hidden word.

Correct Guess Handling
Reveals all positions of the correctly guessed letter.

Wrong Guess Handling
Reduces the number of remaining tries.

Win Condition
If the user guesses all letters, the program displays a success message.

Loss Condition
If tries become zero, the program reveals the word and ends the game.

How It Works

The word to guess is stored in the array:

char word[] = "hangman";


The guess[] array stores the current progress of the user.

The program:

Initializes all entries in guess[] to _

Reads each user input using scanf()

Compares it with each character in the word

Updates correct guesses

Tracks the number of tries left

The game continues until:

All characters are guessed, or

The user runs out of tries

Running the Program
1. Compile the code
gcc hangman.c -o hangman

2. Run the program
./hangman

Output Examples
Initial Output
=== HANGMAN GAME ===
Word: _ _ _ _ _ _ _
Tries left: 6
Enter a letter:

After Correct Guess
Word: _ a _ _ _ a _
Tries left: 6

After Wrong Guess
Wrong guess!
Tries left: 5

When Player Wins
Congratulations! You guessed the word: hangman

When Player Loses
Game Over! The word was: hangman
