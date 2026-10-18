/*
 * 学号：2604020311
 * 姓名：卿灵茜
 * 题目：Homework1 - 题目2 基本数据类型演示
 * 编译：gcc -Wall -std=c11 task2_types.c -o task2_types
 */

#include <stdio.h>

int main(void)
{
    int    age       = 19;              /* 年龄，int 占位 */
    float  height    = 1.75f;           /* 身高（米），float 注意加 f 后缀 */
    double pi        = 3.14159265358979; /* 圆周率，double 精度更高 */
    char   bloodType = 'A';             /* 血型 */

    printf("int     age      = %d\n", age);
    printf("float   height   = %f\n", height);
    printf("double  pi       = %lf\n", pi);
    printf("char    blood    = %c\n", bloodType);

    return 0;
}
