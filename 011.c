// [7:09 PM, 8/1/2020] Avantika I²IT:
#include <stdio.h>
int main()
{
float  radius, volume;
printf("enter a radius ");
scanf("%f",&radius);
volume =(4* 3.14159*radius*radius*radius)/3;
printf("\nvolume of sphere is:  %3f",volume );
return 0;
}
[10:39 AM, 8/2/2020] Avantika I²IT: #include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num>=100&&num<=1000)

       { printf("The number is in between 100-1000 ");
        scanf("%d", &num);
    }
    else

        {printf("The number  is not in between 100-1000");
        scanf("%d",num);
    }
    return 0;
}
