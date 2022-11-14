#include <iostream>
#include "utils/triangular.hpp"

// main function
int main()
{

    // Define maximum triangular number to compute
    int x = 6;

    // Print a header
     printf("The first %d triangular numbers. \n", x);

    // Iterate
    for (int n = 1; n <= x; n ++) {

        // Compute the n-th triangular number
        int T_n = triangular(n);

        // Output result to terminal
        printf("T_%d = %d \n", n, T_n);
        
    }

    // end function
    return 0;
}