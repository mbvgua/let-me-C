#include <stdio.h>

int main() {
    int first =1;
    int val, maxVal, minVal;

    while(scanf("%d", &val) != EOF){
        if (first || val > maxVal) {
            maxVal = val;
        }
        if (first || val < minVal) {
            minVal = val;
        }

        // reset the counter to prevent an infinite loop
        first = 0;

        printf("Maximum value is %d\n",maxVal);
        printf("Minimum value is %d\n",minVal);
    }
}

// major bug if i printed EOF or a no. that is not an interger into terminal
// prints all the numbers in a continous loop
// how do i resolve this?