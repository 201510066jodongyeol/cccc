//
//  main.c
//  4
//
//  Created by 조동열 on 2021/09/29.
//

#include <stdio.h>
/*
int main()
{
    int x1,y1,x2,y2;
    int result;
    printf("좌상단의 좌표를 입력 하세요: ");
    scanf("%d%d",&x1,&y1);
    printf("우상단의 좌표를 입력 하세요: ");
    scanf("%d%d",&x2,&y2);
    
    result = (x2-x1)*(y2-y1);
    
    printf("좌상단 x:%d y:%d\n",x1,y1);
    printf("우상단 x:%d y:%d\n",x2,y2);
    printf("넓이 : %d",result);
}
*/
/*
int main(void)
{
    double rad;
    double area;
    printf("원의 반지름 입력: ");
    scanf("%lf", &rad);
    area = rad*rad*3.1415;
    printf("원의 넓이: %f\n", area);
    return 0;
}
*/
/*
int main(void)
{
    int num1=3, num2=4;
    double divResult;
    divResult = (double)num1 / num2;
    printf("나눗셈 결과 : %f\n", divResult);
    return 0;
}
*/
/*
int main(void)
{
    int myAge=12;
    printf("제 나이는 10진수로 %d살, 16진수로 %x살입니다.\n", myAge, myAge);
    return 0;
}
*/
/*
int main(void)
{
    printf("%-8s %14s %-10s \n", "a b","abcd", "ab");
    printf("%-8s %14s %-10d \n", "abc","abcd", 3);
    return 0;
}
*/
/*
int main(void)
{
    char ch1 = 'A', ch2=65;
    printf("%c %d\n", ch1, ch2);
}
*/
/*
int main(void)
{
    char ch1 =65, ch2='A';
    scanf("%c",&ch1);
    printf("%d %c\n",ch1, ch1);
    return 0;
}
 */
int main(void)
{
    double x1;
    double result;
    printf("Please enter kilometers: ");
    scanf("%lf",&x1);
          
    result = x1/1.609;
    
    printf("%.1lf km is equal to %.1lf miles\n",x1,result);
    return 0;
}

