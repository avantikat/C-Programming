// 3. Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
//    if employee is female, then she will work only in urban areas.
//
//    if employee is a male and age is in between 20 to 40 then he may work in anywhere
//
//    if employee is male and age is in between 40 t0 60 then he will work in urban areas only.
//
//    And any other input of age should print "ERROR".

int main ()
{
int age;
char  sex, martial_status;
printf("enter a age");
scanf("%d",&age);
printf("\n enter a sex(M/m or F/f)");
scanf ("%c",&sex);
printf("\n enter a martial_status(y/Y or N/n");
scanf("%c",&martial_status);
if ( age>=20 && age<=60)
{
if (sex=='f' || sex=='F')
{
printf("you should work in urban area only ");
}
else if (sex=='m'|| sex=='M')
{
if(age>=20&&age<=40)
{
	printf("you cab work anywhere ");
	}
	else
	{
		printf("you should work in urban area only");
		}
		}
		}
		else
		{
			printf("error ");
			}
			return 0;
}
