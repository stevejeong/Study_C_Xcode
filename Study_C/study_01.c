//
//  study_01.c
//  Study_C
//
//  Created by haeyoonpapa on 2016. 10. 8..
//  Copyright © 2016년 haeyoonpapa. All rights reserved.
//
#include <stdio.h>

void Operator01(void){
    
    printf("====[산술연산자]====\n");
    
    int num1 = 10;
    int num2 = 4;
    int rst1,rst2,rst3,rst4,rst5;
    
    rst1 = num1+num2;
    rst2 = num1-num2;
    rst3 = num1*num2;
    rst4 = num1/num2;
    rst5 = num1%num2;
    
    printf("Result1(덧셈) : %d + %d = %d \n",num1,num2,rst1);
    printf("Result2(뺄셈) : %d - %d = %d \n",num1,num2,rst2);
    printf("Result3(곱셈) : %d * %d = %d \n",num1,num2,rst3);
    printf("Result4(나누기/몫) : %d / %d 몫 = %d \n",num1,num2,rst4);
    printf("Result5(나누기/나머지) : %d / %d 나머지 = %d \n\n",num1,num2,rst5);
    
    printf("=====[복합대입연산자]=====\n");
    printf("num1 = %d / num2 = %d \n",num1,num2);
    
    rst1 = num1 += num2;
    rst2 = num1 -= num2;
    rst3 = num1 *= num2;
    rst4 = num1 /= num2;
    rst5 = num1 %= num2;
    
    printf("Result1 : %d += %d = %d \n",num1,num2,rst1);
    printf("Result2 : %d -= %d = %d \n",num1,num2,rst2);
    printf("Result3 : %d *= %d = %d \n",num1,num2,rst3);
    printf("Result4 : %d /= %d = %d \n",num1,num2,rst4);
    printf("Result5 : %d 나머지 %d = %d \n",num1,num2,rst5);
    
    
}
