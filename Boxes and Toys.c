 Tina and Rahul have 1 toy each. They are entering an amusement park but it is not allowed to take the
 toys inside, so they have to keep it in the boxes provided by the park management. They want to keep the
 toys together in one box. There are N boxes in total, at this moment there are ti toys present in ith box and
 the maximum capacity of the box is denoted by ci Rahul and Tina want to know in how many boxes can
 they keep their toys such that both the toys are in the same box.
 Input format
 The first line of the input contains integer N ,denoting the count of boxes. Each of the next N lines
 contains two integers ti and cI denoting the number of toys present in the ith box and the maximum
 capacity of that box.
 Output format
 Print the maximum number of boxes that fulfill the conditions.
 Constraints
 1<=N<=100
 0<=ti,ci<=100
 Time Limit
 1 second
 Example
 Input
 4 122456610
 Output
 2
 Sample test case explanation
 It is only possible to keep both the toys in box2 and box4




#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    // Read the number of boxes
    printf("Enter the number of boxes: ");
    scanf("%d", &N);

    int maxBoxes = 0; // Initialize the count of boxes where they can keep the toys

    // Process each box
    for (int i = 0; i < N; i++) {
        int toys, capacity;

        // Read the number of toys and capacity of the current box
        printf("Enter the number of toys and capacity of box %d: ", i + 1);
        scanf("%d %d", &toys, &capacity);

        // Check if the current box can accommodate both toys
        if (toys >= 2 && capacity >= 2) {
            maxBoxes++; // Increment the count of boxes where they can keep the toys
        }
    }

    printf("Maximum number of boxes that fulfill the conditions: %d\n", maxBoxes);

    return 0;
}


