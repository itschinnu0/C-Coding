#include <stdio.h>
//#include <unistd.h> // For sleep() on POSIX systems
// #include <windows.h> // Uncomment for Windows, and comment out unistd.h
 void delay()
 {
      int a,b;
      for(a=0;a<=50000;a++)
      {
        for(b=0;b<=50000;b++);
      }
      
 }
    void delay1(long int z);
    
int main() 
{
      int x,y;
    
        //printf("---\n");
        //fflush(stdout); // Ensures the output is displayed immediately
        //sleep(1); // Pause for 1 second
        
          for(x=0;x<=9;x++)
          {
              printf("%d\t",x);
              //delay();
              delay1(5500000000);
          } 
        printf("\n");
      return 0;
}
     void delay1(long int z)
     {
       long long int w;
       for(w=0;w<=z;w++);  
     }
     
