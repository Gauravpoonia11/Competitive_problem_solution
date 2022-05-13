//Given N and K, find the lexicographically smallest string of length N using 
//only the first K lowercase letters of the alphabet such that each letter is 
//used at least once and no two adjacent characters are equal.
//If such a string doesn't exist, print -1.
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
void main() {
	int a,n,k,x,c=97;
	int str[100];
	scanf("%d",&a);
	for(int i=0;i<a;i++){
        x=97;
		scanf("%d%d",&n,&k);
		if(n<k){
            printf("%d",-1);
            continue;
		}
		for(int j=1;j<=n;j++){
			if(j==n){
                str[j]=c;
            }else{
                str[j]=x;
			    x++;
            } 
            printf("%c",str[j]);
		}
    }
}