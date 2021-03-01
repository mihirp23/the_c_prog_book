#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ... , 300 */

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;       // lower limit of temperature table
    upper = 300;     // upper limit
    step = 20;       // step size

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

/* output
  0  -17.8
 20   -6.7
 40    4.4
 60   15.6
 80   26.7
100   37.8
120   48.9
140   60.0
160   71.1
180   82.2
200   93.3
220  104.4
240  115.6
260  126.7
280  137.8
300  148.9
*/
