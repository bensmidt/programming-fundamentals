#include <stdio.h>

/* count characters in input */
int main() { 
    double nc; 
    for (nc = 0; getchar() != EOF; ++nc)
	; // need to include this "null statement" since C requires
	  // that for loops have a body
    printf("%.0f\n", nc); 
}
