/*
      1 
    2 1 
  3 2 1 
4 3 2 1
*/

#include <stdio.h>
void main () {
    int i, j, k, n;
    printf ("Enter the no. of lines\n");
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf ("  ");
        for (j = 1, k = i; j <= i; j++)
            printf ("%d ", k--);
        printf ("\n");
    }
}
