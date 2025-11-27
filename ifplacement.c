
#include<stdio.h>

int main()
{
    int per,test,hr;
    printf("Enter the marks in percentage:");
    scanf("%d",&per);
    
    if(per>75)
    {
        printf("check the test marks:");
        scanf("%d",&test);
       if(test)
       {
         printf("check the hr approval:");
         scanf("%d",&hr); 
         if(hr)
         {
           printf("selected\n");
         }
         else
         {
           printf("not selected by hr\n");
           
                   }
                   
       }
       else
       {
         printf("test not cleared\n");
         
       }
       
     }
     else{
     printf("the candidate is ineligible\n");
     }
}
