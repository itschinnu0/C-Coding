//Operator Precedence (Higher to Lower): 
//1.() 2.*, /, % 3.+, - 4.<, >, <=, >= 5.==, != 6.&& 7.|| 8.=

#include<stdio.h>

int main()
{
    //operator precedence and associativity
    //left to right associativity
    int exp1 = 100 + 200/10 -3 * 10;// /,*,+,-
    int exp2 = (100 + 200) / 10 - 3 * 10;
    float exp3 = 15.75 + 20.50 - 10;
    printf("%d\n",exp1);
    printf("%d\n",exp2);
    printf("%f\n",exp3);
    
    printf("15/5*2:%d\n",15/5*2);
    printf("20+10*15/5:%d\n",20+10*15/5);
    printf("(20+10)*15/5:%d\n",(20+10)*15/5);
    printf("(20+10)*(15/5):%d\n",(20+10)*(15/5));
    printf("10>5&&5>2:%d\n",10>5&&5>2);
    printf("20/4%%3:%d\n",20/4%3);
    printf("10-3+2:%d\n",10-3+2);
    printf("10-(3+2):%d\n",10-(3+2));
    printf("2+10*5-5:%d\n",2+10*5-5);
    printf("(2+10)*5-5:%d\n",(2+10)*5-5);
    printf("5*5&10/2:%d\n",5*5&10/2);
     
    return 0;
}
//1. highest ()[]++ --(post).->   left-right
//2. !~++ --(pre) * & sizeof  right - left
//3. * / %
//4. + -
//5. << >>
//6. <<=>>=
//7.== !=
//8. &
//9. ^
//10. |
//11. &&
//12. ||
//13. ?:
//14. = += -= *= /= %=    lowest   right - left
