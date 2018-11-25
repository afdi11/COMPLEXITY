#include<iostream>
using namespace std;

int main(){
    int sum=0,b,c;
    string a;
    cin>>b;
    while(b>0){
        cin>>a;
        if(a=="donate"){
            cin>>c;
            sum=sum+c;
        }else if(a=="report"){
            cout<<sum<<endl;
        }
        b--;
    }
}