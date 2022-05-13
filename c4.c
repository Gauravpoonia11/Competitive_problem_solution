//For a given positive integer N, determine if there exist three positive integers a, b and c 
//1. a + b + c = N
//2. a ^ b ^ c = 0 where ^ denotes the bitwise XOR operation.
//If there exist such a triple (a, b, c), print the lexicographically smallest one.  Else, print -1.
//odd^odd    -
//odd^even   +
//even^even  +
#include <stdio.h> 
#include <stdlib.h> 
void main(){ 
    int x,y,n,a,b,c;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&n);
        a=n/2;
        for(int j=1;j<a;j++){
            b=j;
            c=a-b;
            if(b%2==0||c%2==0){
               if (a^b^c==0)
               {
                   y++;
                   break;
               }
               
            }
        }
        if (y!=0)
        {
            printf("%d %d %d",a,b,c);
        }else{
            printf("%d",-1);
        }
    }
}          