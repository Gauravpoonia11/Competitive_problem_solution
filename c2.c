#include <stdio.h> 
#include <stdlib.h> 
void main(){
    int r,c,a;
    
    scanf("%d",&a);
    for(int k=1;k<=a;k++)
    {
      scanf("%d%d",&r,&c);
      printf("Case #%d:\n",k);
      for (int i = 1; i < r*2+2; i++)
       {     
          for (int j = 1; j < c*2+2; j++)
          {
               if (i==2||i==1)
               {
                   if(j==1||j==2)
                   {
                     printf(".");
                     continue;
                    }
               }
               if (i%2==0)
               {
                   if (j%2==0)
                   {
                      printf(".");
                    }else{
                     printf("|");
                    }
                }else{
                  if (j%2==0)
                   {
                      printf("-");
                    }else{
                     printf("+");
                    }
                }
            } 
            printf("\n");
        }
        
    }
}