# **Hangman Game in C**

## **Abstract**

This project is a C-based Hangman game that allows the user to guess a hidden word one letter at a time. The program uses character arrays, loops, and conditional logic to check guesses, track progress, and determine whether the player wins or loses.

## **Features**

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

## **How It Works**

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

## **Running the Program**
### **1. Compile the code**
gcc hangman.c -o hangman

### **2. Run the program**
./hangman

## **Output Examples**

### **Initial Output**

<img width="228" height="146" alt="image" src="https://github.com/user-attachments/assets/35b81e77-03cf-4f27-b5c4-5f1d382f3869" />

### **After Correct Guess**

<img width="206" height="125" alt="image" src="https://github.com/user-attachments/assets/ef6665cd-0984-4003-8806-ab1ce2178cb0" />

### **After Wrong Guess**

<img width="242" height="152" alt="image" src="https://github.com/user-attachments/assets/07b37ada-c7f7-4f2a-8f89-4bbd66c09190" />

### **When Player Wins**

<img width="457" height="137" alt="image" src="https://github.com/user-attachments/assets/c8bbdfce-ac94-4b9e-a8d8-921ee97d8309" />

### **When Player Loses**

<img width="355" height="66" alt="image" src="https://github.com/user-attachments/assets/dae83fa0-5f1a-4d2e-b547-1c87e2e70955" />
