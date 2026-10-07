#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int size = 2 * n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min_i = i < (size - 1 - i) ? i : (size - 1 - i);
            int min_j = j < (size - 1 - j) ? j : (size - 1 - j);
            int min_dist = min_i < min_j ? min_i : min_j;
            
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }
    return 0;
}
