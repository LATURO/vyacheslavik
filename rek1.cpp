#include <iostream>
#include <cmath>
using namespace std;
bool check(int a){
	int s=0;
	while(a>1){
		s+=a%10;
		a/=10;
	}
	if(s%7!=0){
		return true;
	}
	else{
	return false;
	}
}
int main(){
	int n,buf,buf1;
	int s=0;
	cout<<"Input n"<<endl;
	cin>>n;
	for (int i = 0; i < abs(n);i++){
		cin>>buf;
		if (check(abs(buf))==true){
		cout<<buf<<" >> "<<endl;
		s++;
		}
	}
	cout<<"Count "<<s<<endl;
	return 0;
}
