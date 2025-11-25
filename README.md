# hangman
🎮 Hangman Game in C
Abstract

This project is a simple C-based Hangman Game that allows the user to guess a hidden word one letter at a time.
The program uses arrays, loops, and basic character comparison to simulate the classic Hangman game.
The user must guess all letters correctly before the allowed attempts run out.

Features
1. Display Word Progress

Shows the word as a series of underscores (_) representing unguessed letters.

Updates automatically whenever the user guesses a correct letter.

2. Letter Guessing

Prompts the user to input a single character.

Checks whether the letter exists in the target word.

3. Wrong Guess Tracking

Decreases the number of attempts (tries) every time the user guesses incorrectly.

Displays the remaining number of tries.

4. Win Condition

If all letters in the word are guessed, the player wins.

Displays:
"Congratulations! You guessed the word."

5. Loss Condition

If tries reach zero, the player loses.

Shows the hidden word for learning purposes.

6. Simple & Clean CLI Interface

Fully menu-less interactive loop.

Perfect for beginners learning C programming.

How It Works

The game uses a fixed word:

char word[] = "hangman";


A second array stores the user's current progress:

char guess[20];


The program:

Initializes all positions with _

Reads letter input using scanf()

Checks each character in the word using a loop

Replaces _ with the correct letter when matched

Tracks the number of correct letters

Reduces tries on mistakes

The main loop continues until:

All letters are guessed OR

Tries reach zero

Running the Program
1. Compile the code

Using GCC:

gcc hangman.c -o hangman

2. Run the executable
./hangman

Output Previews
🏁 Initial Screen
=== HANGMAN GAME ===
Word: _ _ _ _ _ _ _
Tries left: 6
Enter a letter:

✔ Correct Guess
Word: _ a _ _ _ a _
Tries left: 6

❌ Wrong Guess
Wrong guess!
Tries left: 5

🎉 Win Message
Congratulations! You guessed the word: hangman

💀 Game Over
Game Over! The word was: hangman
