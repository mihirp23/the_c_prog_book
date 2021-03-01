#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ... , 300 */

/* final version of the fahrenheit to celsius converter
   using constants to deal with magic numbers
   and using a for loop instead of while
*/

/* file : fahtocel_final.c */

#define LOWER 0         /* lower limit of table */
#define UPPER 300       /* upper limit */
#define STEP 20         /* step size */

int main()
{
    float fahr, celsius;


    printf("|----------|-------|\n"); // heading
    printf("|Fahrenheit|Celsius|\n"); // heading
    printf("|----------|-------|\n"); // heading

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {   
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("|%10.0f|%7.1f|\n", fahr, celsius);
        printf("|----------|-------|\n"); // tail
    }
    return 0;
}

/* output
|----------|-------|
|Fahrenheit|Celsius|
|----------|-------|
|         0|  -17.8|
|----------|-------|
|        20|   -6.7|
|----------|-------|
|        40|    4.4|
|----------|-------|
|        60|   15.6|
|----------|-------|
|        80|   26.7|
|----------|-------|
|       100|   37.8|
|----------|-------|
|       120|   48.9|
|----------|-------|
|       140|   60.0|
|----------|-------|
|       160|   71.1|
|----------|-------|
|       180|   82.2|
|----------|-------|
|       200|   93.3|
|----------|-------|
|       220|  104.4|
|----------|-------|
|       240|  115.6|
|----------|-------|
|       260|  126.7|
|----------|-------|
|       280|  137.8|
|----------|-------|
|       300|  148.9|
|----------|-------|
*/
