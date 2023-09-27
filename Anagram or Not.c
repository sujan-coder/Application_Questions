/*
 A string T is said to be an anagram of a string S if it is created by rearranging the characters which are
 present in string S .
 PrepBuddy has a string S and Tina has a string T, they want to know whether S and T are an anagram of
 each other or not.
 Input format
 The first line contains an integer N, representing the number of test cases.
 Each test case contains two strings S and T separated by a line.
 Output format
 For each test case on a new line, print YES if S and T are an anagram of each other else print NO

 */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int N,flag=0;
    printf("Enter the test cases:\n");
    scanf("%d",&N);
    while(N--)
    {
        int cnt=0;
        char T[50],S[50];
        printf("PrepBuddy's string:\n");
        scanf("%s",T);
        printf("Tina's string:\n");
        scanf("%s",S);
int tlen=strlen(T);
int slen=strlen(S);
//strcpy(t,T);
//strcpy(s,S);

    if(tlen!=slen)
    {
        printf("NO\n");
        continue;
    }
    else
    {
        for(int j=0;j<tlen;j++)
        {
            for(int k=0;k<slen;k++)
            {
             if(T[j]==S[k])
             {
                 cnt++;
                 S[k]='\0'; // Mark the character in S as used
             }
            }
        }

    }
    if(cnt==tlen)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    printf("\n");
}


    return 0;
}
