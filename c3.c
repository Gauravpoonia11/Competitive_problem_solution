#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    int a,t=0,n=0;
    char str[25];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%c",&str[i]);
        if(str[i]=='N'){
            n++;
        }else{
            t++;
        }
    }
    if(n>t){
        printf("Nutan");
    }else{
        printf("Tusla");
    }
}