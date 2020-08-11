// Day 010 - 9th August 2020
// =======================================================================
// 3) A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.
// =========================================================================


#include <stdio.h>
 int main()
 {   
   float a, b;     
  printf("enter the total no. of classes held.\n");     scanf("%f", &a);   
   printf("enter the no. of classes attended.\n");     scanf("%f", &b);   
    if((b/a) * 100 < 75)
   {
       printf("sorry, you are not eligible for giving the ");
   }
   else {         
   printf("you are eligible for giving the examinations.");  
      }     
   return 0;
    }
