#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
	char ch;
//	clrscr();
	fptr=fopen("Myfile.txt","r");
	printf("the line of text is");
	
	/*read the text from file using 	getc() function upto EOF and put 	them on the screen
	*/
 
	while( (ch=getc(fptr)) !=EOF)
      {
	       printf("%c",ch);
      }
	fclose(fptr);
	getch();
}

