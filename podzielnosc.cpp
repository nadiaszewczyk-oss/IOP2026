#include <iostream>
using namespace std;

int nwd(int a, int b){
	while(b!=0){
	int r = a%b;
	a=b;
	b=r;
	}
	return a;
}

int main(){

	int a, b;
	cin>>a>>b;

	if(a<0 || b<0){
		cout<<"Liczby musza byc dodatnie"<<endl;
		return 0;
	}

	cout<<a<<" "<<b<<endl;
	cout<<"Największy wspolny dzielnik liczb "<<a<<" i "<<b<<": "<<nwd(a,b)<<endl;

return 0;
}
