# Bitwise Operators

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Print a pattern of numbers from $1$ to $n$ as shown below.  Each of the numbers is separated by a single space.    

                                4 4 4 4 4 4 4  
                                4 3 3 3 3 3 4   
                                4 3 2 2 2 3 4   
                                4 3 2 1 2 3 4   
                                4 3 2 2 2 3 4   
                                4 3 3 3 3 3 4   
                                4 4 4 4 4 4 4   

**Input Format**

The input will contain a single integer $n$.  

**Constraints**

$1 \le n \le 1000$

**Output Format**

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T20:15:01.053Z  

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    
    // Iterate through all possible pairs of a and b where a < b
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int current_and = a & b;
            int current_or = a | b;
            int current_xor = a ^ b;
            
            // Check if the current operations are less than k and greater than the current maximums
            if (current_and < k && current_and > max_and) {
                max_and = current_and;
            }
            if (current_or < k && current_or > max_or) {
                max_or = current_or;
            }
            if (current_xor < k && current_xor > max_xor) {
                max_xor = current_xor;
            }
        }
    }
    
    // Print the results on separate lines in the specified order
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
    // The only input line contains 2 space-separated integers, n and k
    scanf("%d %d", &n, &k);
    
    calculate_the_maximum(n, k);
    
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/printing-pattern-2/problem)