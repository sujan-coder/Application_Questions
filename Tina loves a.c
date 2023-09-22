/*Tina has a string S. She really likes the letter a. She calls a string good if strictly more than half of the characters in that string are a's. For example "aaacb", "acaa" are good strings, and "baba", "abbba",
" "(empty string) are not.
Tina can erase some characters from her string S. She would like to know what is the length of the longest string remaining after erasing some characters (possibly zero) to get a good string. It is guaranteed that the string has at least one a in it, so the answer always exists.

Input format
The first line contains an integer T, denoting the number of test cases.
Each test case consists of a string S containing only lowercase characters.

Output format
For each test case on a new line, print the length of longest good string.
*/


#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int T,i,l;

    printf("No of test cases:\n");
    scanf("%d",&T);
    for(int j=0;j<T;j++)
        {
        char S[100];
        int count=0;

    printf("Enter the character:");
    scanf("%s",S);
    l=strlen(S);
    for(i=0;i<l;i++)
    {
     if(S[i]=='a')
     {
         count++;
     }

    }

     if(count>l/2)
     {
         printf("Good string\n");
     }
             else
             {
                 int goodlen=2*count-1;
                 printf("Length of Good String:%d\n",goodlen);
             }
         }


return 0;

}



