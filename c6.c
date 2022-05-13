#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    int t,i=1;
    scanf("%d",&t);
    while(t--){
        int d,n;
        scanf("%d",&d);
        char dj[20];
        scanf("%s",dj);
        n=strlen(dj);
        char ar1[n+1];
        strcpy(ar1,dj);
        for(int i=0;i<n;i++){
            ar1[i];
        }
        for(int j=0;j<n;j++){
            if(ar1[j]=='E'){
                ar1[j]='S';
            }else{
                ar1[j]='E';
            }
        }
        for(int i=0;i<n;i++){
            printf("%c",ar1[i]);
        }
        i++;
    }
}