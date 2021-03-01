#include <stdio.h>

/* print celsius-fahrenheit table
  for cel = 0, 20, ... , 300 */

/* exercise 1.4 - celsius to fahreheit table */

/* file : celtofah_table.c */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;       // lower limit of temperature table
    upper = 300;     // upper limit
    step = 20;       // step size

    celsius = lower;

    printf("|-------|----------|\n"); // heading
    printf("|Celsius|Fahrenheit|\n"); // heading
    printf("|-------|----------|\n"); // heading

    while (celsius <= upper) {
        fahr = (9.0 / 5.0 * celsius) + 32.0;
        printf("|%7.1f|%10.0f|\n", celsius, fahr);
        printf("|-------|----------|\n"); // heading
        celsius = celsius + step;
    }
    return 0;
}

/* output
|-------|----------|
|Celsius|Fahrenheit|
|-------|----------|
|    0.0|        32|
|-------|----------|
|   20.0|        68|
|-------|----------|
|   40.0|       104|
|-------|----------|
|   60.0|       140|
|-------|----------|
|   80.0|       176|
|-------|----------|
|  100.0|       212|
|-------|----------|
|  120.0|       248|
|-------|----------|
|  140.0|       284|
|-------|----------|
|  160.0|       320|
|-------|----------|
|  180.0|       356|
|-------|----------|
|  200.0|       392|
|-------|----------|
|  220.0|       428|
|-------|----------|
|  240.0|       464|
|-------|----------|
|  260.0|       500|
|-------|----------|
|  280.0|       536|
|-------|----------|
|  300.0|       572|
|-------|----------|
*/
