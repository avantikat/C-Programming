#include <stdio.h>
int main()
{
int marks;
printf ("enter a mark \n");
scanf("%d",&marks);
if (marks >= 90){
    printf("A");
}
else if (marks >= 75 && marks < 90){
    printf("B");
}
else if (marks >= 65 && marks < 75){
    printf("C");
    }
else {
    printf("unknown grade\n");
}
  return 0;
}
