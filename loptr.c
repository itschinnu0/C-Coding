#include<stdio.h>

int main()
{
     printf("1&&1:%d\n",1 && 1);
     printf("1&&0:%d\n",1 && 0);
     printf("0&&1:%d\n",0 && 1);
     printf("0&&0:%d\n",0 && 0);
     printf("5&&5:%d\n",5 && 5);
     printf("2&&5:%d\n",2 && 5);
     printf("5&&2:%d\n",5 && 2);
     
     printf("1||1:%d\n",1 || 1);
     printf("0||1:%d\n",0 || 1);
     printf("0||0:%d\n",0 || 0);
     printf("5||5:%d\n",5 || 5);
     printf("2||5:%d\n",2 || 5);
     printf("5||2:%d\n",5 || 2);
     
     printf("!0:%d\n",!0);
     printf("!1:%d\n",!1);
     printf("!5:%d\n",!5);
      
     printf("(2<5)&&(5<6):%d\n",(2<5)&&(5<6));
     printf("(2<5)||(5>6):%d\n",(2<5)||(5>6));
     printf("!(2<5):%d\n",!(2<5));
     printf("(2<5)&&((5<6)||(6>9)):%d\n",(2<5)&&((5<6)||(6>9)));
          
     //bit-wise supports mamipulate bits of char and int type data only
     printf("1&1:%d\n",1 & 1);
     printf("1&0:%d\n",1 & 0);
     printf("0&1:%d\n",0 & 1);
     printf("0&0:%d\n",0 & 0);
     printf("5&5:%d\n",5 & 5);
     printf("2&5:%d\n",2 & 5);
     printf("5&2:%d\n",5 & 2);
     printf("1|1:%d\n",1 | 1);
     printf("1|0:%d\n",1 | 0);
     printf("0|1:%d\n",0 | 1);
     printf("0|0:%d\n",0 | 0);
     printf("5|5:%d\n",5 | 5);
     printf("2|5:%d\n",2 | 5);
     printf("5|2:%d\n",5 | 2);
     printf("5^2:%d\n",5^2);
     printf("150&139=%d\n",150&139);
     printf("150|139=%d\n",150|139);
     printf("150^139=%d\n",150^139);
     printf("150<<3=%d\n",150<<3);
     printf("150>>3=%d\n",150>>3);
     
     
     
     printf("~0:%d\n",~0);//-n becomes -(n+1) ~0 = -1
     printf("~1:%d\n",~1);//-2
     printf("~5:%d\n",~5);//-6, negative numbers are stored in 2's complement
     
     return 0;
   //in turbo c  int = 2bytes(16-bits)  
   //in windows  int = 4bytes(32-bits)
   //depends on OS
     
}
