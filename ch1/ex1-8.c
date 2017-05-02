/**
 *  练习 1-8 编写一个统计空格、制表符与换行符个数的程序。
 */

#include <stdio.h>
int main()
{
    int spaceCount = 0;
    int tabCount = 0;
    int rowCount = 0;
    int c;

    while((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            rowCount++;
        }
        else if (c == '\t')
        {
            tabCount++;
        }
        else if (c == ' ')
        {
            spaceCount++;
        }
    }

    printf(" Space: %d \t Tab: %d \t Row: %d \n", spaceCount, tabCount, rowCount);
    return 0;
}