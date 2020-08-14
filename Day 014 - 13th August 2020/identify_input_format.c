// Day 014 - 13th August 2020
// ================================================
//
// [Note - Solve using Functions]
// Concept - If-Else statements.......
//
// 3. Write a program to input any character and check whether it is alphabet, digit
//  or special character.
// Hint:   "a-z" or "A-Z" is alphabet
// 	"0-9" is digit.
// 	any other input is special character

#include <stdio.h>
void check (char ch)
{
 if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  {
    printf("character = alphabet");
  	 }
 else if(ch >= '0' && ch <= '9')
 {
 	printf("character =digit");
 	}
 	else
 	{
 	printf("character = special character");
    }

}
int main()
{
char  character, alphabet,digit,sepcial_character ;
printf("Enter any character  ");
 scanf("%c", &character );
check(character);
return 0 ;
}
