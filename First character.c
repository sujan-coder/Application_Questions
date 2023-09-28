/* Prepbuddy has a string S consisting of lowercase Latin Letters. The String S can contain some repeated
 characters, no repeated characters, and maybe all repeated characters. He is trying to find the first
 character which is non-repeating in S. The String S contains many non-repeating characters, so he is not
 able to find the answer. You can help him to find the answer.
 Note:- Print −1 if there is no non-repeating character.
 Input Format
 The first line contains T denoting the number of test cases. Then following each test case, the next line
 contains the string S.
 Output Format
 For each test case, print the index of the first non-repeating character present in the string. Print −1,if
 there is no non-repeating character.
 Input example:
 hello
 zxvczbtxyzvy

 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//int test(char S[],int 50);
int main()
{
    int T;
    printf("Enter the test cases:\n");
    scanf("%d",&T);
    while(T--)
    {
        char S[50];
        printf("Enter the string:");
        scanf(" %s", S);
        int index=test(S,strlen(S));
        if (index != -1) {
            printf("%c is first Non Repeating character at index %d\n", S[index], index);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}

int test(const char S[],int l)
{
    int i,j,cnt=0;
    //int l=strlen(S);
    for(i=0;i<l;i++)
    {
        cnt=0;
        for(j=0;j<l;j++)
        {
            if(i!=j && S[i]==S[j])
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            return(i);

        }
    }

            return -1;

}


