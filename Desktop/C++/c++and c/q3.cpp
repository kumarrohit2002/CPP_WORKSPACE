// C program to illustrate
// the strrchr() function
#include <stdio.h>
#include <string.h>

int main()
{
	// initializing string
	char str[] = "GeeksforGeeks";

	// character to be searched
	char chr = 'k';

	// Storing pointer returned by
	char* ptr = strrchr(str, chr);

	// getting the position of the character
	if (ptr) {
		printf("Last occurrence of %c in %s is at index %d",
			chr, str, ptr - str);
	}
	// condition for character not present
	else {
		printf("%c is not present in %s ", chr, str);
	}
	return 0;
}

