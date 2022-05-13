#include <iostream>

using namespace std;

int main()
{
    char a='+',b='-',c='.',d='|';
    int t;
    int num=1;
    cin>>t;
    while(t--){
        int r, z;
        cin>> r >> z;
        cout<<"Case#"<<num<<":"<<endl;

        for(int i=0;i<2*r+1;i++){
            for(int j=0;j<2*z+1;j++){

                if(i%2==0){
                    if(j%2==0){
                        if(i==0&&j==0){
                            cout<<c;
                        }else{
                            cout<<a;}

                    }else if(j%2!=0){
                        if(i==0&&j==1){
                            cout<<c;
                        }else{
                        cout<<b;}
                    }
                }
                else{
                    if(j%2!=0){
                        cout<<c;
                    }else if(j%2==0){
                        if(i==1&&j==0){
                            cout<<c;
                        }else{
                        cout<<d;}
                    }

                }

            }
            cout<<endl;
        }
        num++;

    }


}