#include <stdio.h>

int main() { 
    int c; 
    while ((c = getchar()) != EOF) 
	// EOF = "Ctrl + D" on keyboard
	putchar(c); 
} 
