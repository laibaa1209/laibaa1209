//programmer:Laiba Zia
//date:3rd october 2023
//Question:Write a program for a match-stick game between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
/* 1. There are 21 matchsticks.
2. The computer asks the player to pick 1,2,3 or 4 match sticks.
3. After the person picks, the computer does its picking.
4. Whoever is forced to pick up the last matchstick loses the game. */

#include <stdio.h>

int main() { //start of main
    
    //declaration
    int playerPicks, TotalMatchesLeft = 21 ,machinePicks, count;
    printf ( "\"The game of matchsticks has begun\"\n\n" );
    
    //start of loop to print matchstciks represented by 0s
    for ( count = 1; count <= TotalMatchesLeft ; count++ ) {
        printf ("0 ");
    }
    
    printf ( "\n\n" );
    
    //instructing the user how to play 
    printf ( "\"There are 21 matchsticks represented by 0s, you have to pick up 1,2,3, or 4 of them!\"\n\n" );
    
    //start of while loop 
    while ( TotalMatchesLeft != 0 ) { //test condition 
    
    //asking the user to input matches
    printf ( "Enter the number of matches you will be picking: " );  
    scanf ( "%d",&playerPicks );
    if (playerPicks<0 || playerPicks>4) { 
        printf ("invalid input\n"); 
    } else {
    
    //calculating matches left after picked up by the user
    TotalMatchesLeft -= playerPicks;
    
    //subtracting 5 to ensure thatthe computer wins
    machinePicks = 5-playerPicks;
    
    //output matches picked by the computer
    printf ( "Computer picks: %d\n\n" , machinePicks ); 
    
    //calculating leftover matches
    TotalMatchesLeft -= machinePicks;
    
    //beginning of loop to print leftover matches
    for (count = 0 ; count < TotalMatchesLeft ; count++ ) {
        printf ( "0 " );
    } printf ( "\n\n" );
       
        //test condition to check is matches left equal 1 so it breaks the loop 
        if(TotalMatchesLeft == 1) {
            break;
        }
    }
    }
        //output the winner and looser
    printf ("\nSince you were the one to pick the last match, YOU LOOSE!");
      printf ("\nTHE COMPUTER HAS WON!");
   
    return 0;
} //end main