/*
 Shivangi and Pragya like to play a new game called "Chance Game". In each turn exactly one player gets a
 single point. The game stops when a player gets at least P points with at least 2 points more than the
 other player. Currently, Shivangi has a score of S1 and Pragya has a score of S2, they want to know the
 minimum number of more turns to be played until one of them wins the game.
 Input format
 The first line contains an integer T denoting the number of test cases. Each test case contains 3
 space-separated integers denoting the values of P ,S1and S2.
 Output format
 For each test case on a new line print one integer representing the minimum number of turns remaining
 until one player wins the game.
Constraints
 1<=T<=5000
 1<=P<=100
 0<=S1,S2<=100
 Time Limit
 1 second
 Example
 Input
 2
 5 13
 8 47
 Output
 2 1
 Sample test case explanation
 In the first case P=5, Pragya has 3 points, if we play 2 more games and Pragya wins both the game, her
 points will become 5 satisfying both the conditions stated above

*/
#include <stdio.h>
#include <stdlib.h>
//int game(int ,int ,int);
int main()
{
    int T,P,s1,s2,i,g,t;
    printf("CHANCE GAME\n");
    printf("No.of Test cases:");
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    printf("Enter the Game %d point:\n",i);
    scanf("%d",&P);
    printf("Current Shivangi's Point:");
    scanf("%d",&s1);
    printf("Current Pragya's Point:");
    scanf("%d",&s2);
    g=game(s1,s2,P);
    printf("No of chances left:%d\n",g);

    }
    return 0;
}

    int game(int s1,int s2,int P)
    {
    int  g;

    if(s1>s2)
    {
        g=P-s1;
    }
    else
    {
        g=P-s2;
    }


    }


/*

int game(int s1, int s2, int P) {
    int g;

    if (s1 >= P && s1 >= s2 + 2) {
        // Shivangi already has enough points to win
        g = 0;
    } else if (s2 >= P && s2 >= s1 + 2) {
        // Pragya already has enough points to win
        g = 0;
    } else {
        // Calculate the number of turns remaining for either player to win
        if (s1 > s2) {
            g = (P - s2 + 1) / 2; // Add 1 to ensure they have at least 2 more points
        } else {
            g = (P - s1 + 1) / 2; // Add 1 to ensure they have at least 2 more points
        }
    }

    return g;
}

*/
