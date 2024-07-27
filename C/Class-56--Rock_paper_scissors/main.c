#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.
int greater(char c1, char c2)
{
}

int main()
{
    int player_score = 0, computer_score = 0, temp;
    char comp_char, player_char;
    char dict[]={'r', 'p', 's'};
    printf("Welcome to Rock, Paper and Scissor game . \n");
    for (int i = 0; i < 3; i++)
    {
        //Take player 1's input
        printf("Player 1's turn : \n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors \n");
        scanf("d",&temp);
        player_char= dict[temp-1];
        //Generate computer's input
        printf("Computer's turn : \n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors \n");
        temp=generateRandomNumber(3)+1;
        comp_char= dict[temp-1];

        //Calculate Score
        if (greater(computer_score,player_char)==1)
        {
            computer_score++;
        }
        else if (greater(computer_score,player_char)==-1)
        {
            computer_score++;
            player_score++;
        }
        else{
            player_score++;
        }

        
        
    }

    printf("The random number between 0 to 5 is %d\n", generateRandomNumber(5));
    return 0;
}