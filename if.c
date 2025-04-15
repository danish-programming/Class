// Program to find absolute value using if statement
#include <stdio.h>
int main(void)
{
int number;
printf ( " Enter an integer :" );
scanf ( "%d" , &number);
if ( number < 0 )
number = -number;
printf ( " The absolute value is %d .\n" , number);
return 0;
}
