#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int array[10];
  double e;
  for (int i = 0; i < 10; i++) {
    cin>>e;
    array[i]=e;
  }
  for (int i = 9; i >= 0; i--) {
    for (int j = 9; j > 0; j--) {
      if(array[j]%10==3){
        double buf=array[j];
        array[j]=array[j-1];
        array[j-1]=buf;
      }
    }
  }
  cout<<"Array ";
  for (int i = 0; i < 10; i++) {
    cout<<" "<<array[i];
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 9; j++) {
      if((array[j]%10==3)&&(array[j+1]%10==3)&&(array[j]>array[j+1])){
        double buf=array[j];
        array[j]=array[j+1];
        array[j+1]=buf;
      }
    }
  }
  cout<<endl<<"Sort ";
  for (int i = 0; i < 10; i++) {
    cout<<" "<<array[i];
  }
  return 0;
}
