//
//  main.c
//  hw1
//
//  Created by 조동열 on 2021/09/16.
//

#include <stdio.h>
/*
int main(void)
{
    int a;
    printf("하나의 정수입력:");
    scanf("%d",&a);
    
    printf("%d 의 제곱은 %d입니다.",a,a*a);
    return 0;
}*/
/*
int main(void)
{
    int num1;
    int num2;
    int result1;
    int result2;
    printf("두 개의 정수 입력:");
    scanf("%d %d",&num1,&num2);
    
    printf("%d / %d = %d \n", num1, num2, num1/num2);
    printf("%d %% %d = %d \n", num1, num2, num1%num2);
    
    return 0;
}
*/
/*
int main(void)
{
    int num1;
    int num2;
    printf("하나의 정수를 입력하시오:");
    scanf("%d", &num1);
    num2 = ~num1+1;
    printf("%d",num2);
    return 0;
}*/
/*
int main(void)
{
    printf("%d", 3<<3>>2);
    return 0;
}*/
int main(void)
{
    int num1;
    int num2;
    int result1, result2, result3;
    
    printf("두 정수를 입력하세요:");
    scanf("%d %d",&num1, &num2);
    
    result1 = num1 & num2;
    result2 = num1 | num2;
    result3 = num1 ^ num2;
    
    printf("%d & %d = %d \n", num1, num2, result1);
    printf("%d | %d = %d \n", num1, num2, result2);
    printf("%d ^ %d = %d \n", num1, num2, result3);

    return 0;
    
}
