/*A substring is a contiguous sequence of characters within a string.
 PrepBuddy gave you two string s and t and ask you to check if the string is a substring of or not. If string t
 is a substring of s then print "YES" otherwise Print "NO" without quotes.
Example: s=prepbytes, t=prep
 here-string t is a Substring of string s.
 Note: Both string contains lowercase English letters
 Input Format
 The first line contains an integer T, that represents the number of test cases.
 Each test-cases contains two string s and t.
 Output
 If string t is Subtring of string s then print "YES" otherwise Print "NO" without quote.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50],t[50];
    int T;
    printf("Enter the number of test cases:");
    scanf("%d",&T);
    while(T--)
    {
        int flag=0,j;
    printf("enter the string s:\n");
    scanf(" %s",s);
    int ls=strlen(s);
    printf("enter the string t:\n");
    scanf(" %s",t);
    int lt=strlen(t);
    for(int i=0;i<ls;i++)
    {
        for(int j=0;j<lt;j++)
        {
         if(s[i]==t[j] && s[i+1]==t[j+1])
         {
          flag=1;
         }
        }

    }
    if(flag)

    printf("Yes\n");
    else
        printf("No\n");

    }
    return 0;
}


CGPT

#include <stdio.h>
#include <string.h>

int main() {
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        char s[50], t[50];
        int flag = 0;

        printf("Enter string s:\n");
        scanf(" %49s", s);
        printf("Enter string t:\n");
        scanf(" %49s", t);

        int ls = strlen(s);
        int lt = strlen(t);

        for (int i = 0; i <= ls - lt; i++) {
            int j;
            for (j = 0; j < lt; j++) {
                if (s[i + j] != t[j]) {
                    break; // If a mismatch is found, break the inner loop.
                }
            }
            if (j == lt) {
                flag = 1; // If we reached the end of t without a mismatch, t is a substring of s.
                break;
            }
        }

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
