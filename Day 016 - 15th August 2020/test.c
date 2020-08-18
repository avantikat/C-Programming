//1.  This drill is to write a program that produces a simple form letter based
//on user input. Begin by typing the code by asking the user to enter his or
//her first name and writing "Hello, first_name" where first_name is the name
//entered by the user. Then modify your code as follows:
//change the prompt to "Enter the name of the person you want to write this letter."
//and change the output to "Dear first_name,". Don't forget the comma.

//2. Add an introductory line or two, like "How are you? I am fine. I miss you."
//Be sure to indent the first line. Add a gew more lines of your choice -- after all
//it's your letter.

//3. Now prompt the user for the name of another friend, and store it in
//friend_name. Add a line to your letter: "Have you seen friend_name lately?"

//4. Declare a char variable called friend_sex and initialize its value to 0.
//Promt the user to enter an m if the friend is male and an f if the friend is female.
//Assign the value entered to the variable friend_sex. Then use if-else statement to write
//the following:
//If the friend is male, write "If you see friend_name please ask him to call me."
//If the friend is female, write "If you see friend_name please ask her to call me."

//5. Prompt the user to enter the age of the recipient and assign it to an int
//variable age. Have your program write "I hear you just had a birthday and you are age years old."
//If age is 0 or less or 110 or more, call - error("You're kidding!").

//6. Add this to your letter:

//If your friend is under 12, write "Next year you will be age+1".
//If your friend is 17, write "Next year you will be able to vote."
//If your friend is over 70, write "I hope you are enjoying retirement."

//check your program to make sure it responds appropriately to each kind of value.

//7. Add "Yours Sincerely," followed by two blank lines for a signature, followed by your name.
#include<stdio.h>
int main ()
{
char first_name[10], friend_name[10];
char friend_sex;
int age;
char f,F,M,m;
printf("enter first_name ");
scanf("%s",&first_name);
printf("\n Hello %s", first_name);
printf("\n Dear %s", first_name);
printf("\n how are you");
printf("\n I am fine");
printf("\n I miss u so much dear ");
printf("\n enter friend_name");
scanf("%s",&friend_name);
printf("\n have you seen %s lately? ", friend_name);
while (1){
    printf("\n enter friend_sex");
    scanf("%s",&friend_sex);
    if (friend_sex == 'm' || friend_sex == 'M')
    {
	printf("If you see %s please ask him call me", friend_name);
	break;
	}
	else if (friend_sex == 'F'|| friend_sex == 'f')
	{
	printf("If you see %s please ask her call me", friend_name);
	break;
	}
	else
	{
	printf("invalid input ");
	continue;
	}
}
	printf("\nenter your age");
	scanf("%d",&age);
	if(age >= 110 && age <= 0 )
	{
	    printf("\nyou are kidding ");
	}
	else
	{
	    printf("\nI hear you just had a birthday you are %d year old", age);
	}
		;
if (age < 12)
   {
	printf("\n next year you will be age +1");
   }
	else if (age == 17)
	{
		printf("\n next year you'll be able to vote ");
		}
	else if (age > 70)
	{
		printf("\ni hope you are enjoying retirement ");
    }
	else
	{
		printf("\n");
	}

	printf("\nyours sincerely ");
	printf("\n");
    printf("\n");

	return 0;
}
