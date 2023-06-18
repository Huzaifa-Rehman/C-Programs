/*	Write a C program to check whether a character is an alphabet,
    digit or special character.(Use Ascii value)
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charater : ");
    scanf(" %c",&ch);

    if (ch >='A' && ch <= 'Z' || ch >='a' && ch <= 'z'){

        printf("%c is an alphabet",ch);
    }
    else if(ch >= '0' && ch <= '9'){
    	
    	printf("%c is digit",ch);	
	}
    else{
    	printf("%c is a special charater",ch);
	} 
}
