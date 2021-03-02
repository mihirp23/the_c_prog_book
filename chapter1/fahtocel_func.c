#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ... , 300 */

/* Exercise 1.15
   fahrenheit to celsius converter
   using constants to deal with magic numbers
   and using a for loop instead of while.
   AND using a function to do the conversion.
*/


#define LOWER 0         /* lower limit of table */
#define UPPER 300       /* upper limit */
#define STEP 20         /* step size */

float fahtocel(float f); // function prototype

int main()
{
    float fahr;


    printf("|----------|-------|\n"); // heading
    printf("|Fahrenheit|Celsius|\n"); // heading
    printf("|----------|-------|\n"); // heading

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {   
        printf("|%10.0f|%7.1f|\n", fahr, fahtocel(fahr));
        printf("|----------|-------|\n"); // tail
    }
    return 0;
}

/* converts from provided fahrenheit value to celsius */
float fahtocel(float fahr)
{
   float cel;
   cel = (5.0 / 9.0) * (fahr - 32.0);
   return cel;
}

