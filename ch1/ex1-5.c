/**
 *  练习 1-5  修改温度转换程序，要求逆序（即按照从300度到0度的顺序 ） 打印温度转换表。
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

    celsius  = upper;
    while( celsius >= lower)
    {
        fahr = (celsius * 9.0) /5 + 32.0;
        printf("%3.0f\t%6.1f\n",  celsius, fahr );
        celsius -= step;
    }
    return 0;
}