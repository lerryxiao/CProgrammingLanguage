/**
 * 练习1-3 修改温度转换程序，使之能在转换表的顶部打印一个标题
 *

 * 当 fahr = 0, 20, ..., 300 时，分别打印华氏温度与摄氏温度对照表
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
    printf("华氏温度\t摄氏温度\n");
    /** end **/

    fahr = lower;
    while( fahr <= upper)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f\t%6.1f\n", fahr, celsius );
        fahr = fahr + step;
    }
    return 0;
}

