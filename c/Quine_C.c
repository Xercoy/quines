//Quine_C.c
//Original Source: https://www.geeksforgeeks.org/quine-a-self-reproducing-program/

//Name: Patrick Lin
//Github Username: Arbalest007
//***Hacktoberfest***

/*
---Changes---
I've added some formatting with the newline escape sequence as well as an additional printf statement
and system pause call to showcase additional functionality can be put into a Quine outside of the example 
provided in the source tutorial above from which I learned how the concept works.
*/

/*
The key to writing a Quine is to make use of %modifiers to substitute for any formatting/escape sequences and 
defining the variables in the program at the very start of the code.

char *a, *b, *c are character arrays that store C-strings. 

*a -> String statement to user in a "Hello-World!" fashion that will be printed out first
*b -> All of the code in this program as a string without causing duplication issues
*c -> Newline so that we can clean up the output 

Within this program, the %s modifiers are used so that when the printf statement is called later 
on to print out our program, we can just use the array variables by assigning them to the %s accordingly 
to their contents without worrying about potentially duplicating whatever we need to print out. 

Additionally, the %c modifiers allow us to print out the quotation marks and other formatting characters 
using their ASCII values instead of trying to use escape sequences which would throw us down an endless 
rabbit hole.
*/

#include <stdio.h>

int main()
{
	char *a = "Hello user! This is a Quine written in C!";
	char *b = "\n";
	char *c = "#include <stdio.h> int main() { char *a = %c%s%c; char *b = %c%c%c%c; char *c = %c%s%c; printf(a); printf(b); printf(b); printf(c, 34, a, 34, 34, 92, 110, 34, 34, c, 34, 34, 34); printf(b); printf(b); system(%cpause%c); return 0; }";
	
	printf(a);

	printf(b);
	printf(b);

	printf(c, 34, a, 34, 34, 92, 110, 34, 34, c, 34, 34, 34); 

	printf(b);
	printf(b);

	system("pause");

	return 0;
}
