#include <iostream>
using namespace std;
int main(){
	int min = INT_MAX;
	int n = 100;
	while(n!=-101){
		cin>>n;
		if ((n>0)&&(n>min)){
			min=n;
		}
	}
	if (min==INT_MAX){
		cout<<"ERROR"<<endl;
	}
	else{
		cout<<"MAX "<<min<<endl;
	}
}
