#include<iostream>
#include<string>
using namespace std;

int main(){
	string a;     
	int b,c;     
	cin>>b;
	while(b>0){
		cin>>a;
		if(a.length()==3 && ((a[0]=='o' && a[1]=='n') || (a[1]=='n' && a[2]=='e') || (a[0]=='o' && a[2]=='e'))){
			cout<<1<<endl;
		}else if(a.length()==3 && ((a[0]=='t' && a[1]=='w') || (a[1]=='w' && a[2]=='o') || (a[0]=='t' && a[2]=='o'))){
			cout<<2<<endl;
		}else if(a.length()==5 && ((a[0]=='t' && a[1]=='h' && a[2]=='r' && a[3]=='e') || (a[0]=='t' && a[1]=='h' && a[2]=='r' && a[4]=='e') || (a[0]=='t' && a[1]=='h' && a[3]=='e' && a[4]=='e')|| (a[0]=='t' && a[2]=='r' && a[3]=='e' && a[4]=='e')|| (a[1]=='h' && a[2]=='r' && a[3]=='e' && a[4]=='e'))){
			cout<<3<<endl;
		}
		b--;
    }
}
