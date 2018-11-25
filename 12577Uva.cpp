#include<iostream>
using namespace std;

int main(){
	string a;
	int i=1;
	cin>>a;
	while(a!="*"){
		cout<<"Case "<<i<<": ";
		if(a=="Hajj"){
			cout<<"Hajj-e-Akbar";
		}else if(a=="Umrah"){
			cout<<"Hajj-e-Asghar";
			
		}cout<<endl;
		i++;
		cin>>a;
	}
}