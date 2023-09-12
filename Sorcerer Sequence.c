/*
 Sorcerer Sequence
 Sorcerer Sequence is a series of integer numbers in which the first term starts with a positive integer and
 the remaining terms are generated from the immediate previous term using the below recurrence relation
 ak+1=a1/2k for even ak
 ak+1=a3/2k for odd ak
 Given a number N your task is to print the space-separated Sorcerer Sequence using this number as the
 f
 irst term of the sequence.
 Input Format
 First-line contains an integer T, where T is the number of test cases. For every Test case, there is only one
 integer input N.
 Output Format
 For each test case, in a new line print, the space-separated Sorcerer sequence for number N as the first
 term of the sequence.
 Constraints
 1<=T<=100
 1<=N<=100
 Time Limit
 1 second
 Example
 Input1
 2 85
 Output
 8 21
 5 1136621
Explanation
 In the first test case, we start with 8 and use the above formula to get the next terms, until we reach 1. In
 the second test case, we start with 5, next digit is (sqrt(5)*sqrt(5)*sqrt(5)) =11, and so on
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int T, N, n, x, j;
    printf("Enter the number of test cases:\n");
    scanf("%d", &T);

    for (j = 1; j <= T; j++)
        {
        printf("Input %d: ", j);
        scanf("%d", &N);
        n = N;

        while (n > 1)
            {
            x = 0;
            if (n % 2 == 0)
                {
                x = floor(sqrt(n));
                }
            else
                {
                x = floor(sqrt(n) * sqrt(n) * sqrt(n));
                }

            printf("%d ", x);
            n = x;
        }
        printf("\n");
    }

    return 0;
}

