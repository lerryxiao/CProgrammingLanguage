/**
 * 练习1-4 编写一个程序打印摄氏温度转换为相应的华氏温度的转换表。
 *
 */


#include <stdio.h>
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step= 20;
    /** add by myself **/
    printf("摄氏温度\t华氏温度\n");
    /** end **/

    celsius  = lower;
    while( celsius <= upper)
    {
        fahr = (celsius * 9.0) /5 + 32.0;
        printf("%3.0f\t%6.1f\n",  celsius, fahr );
        celsius += step;
    }
    return 0;
}
