#include <iostream>
#include <cmath>
using namespace std;
double pow1(double x,double e){
  for (int i = 0; i < e; i++) {
    x*=x;
  }
  return x;
}
double fact(double e){
  int x=1;
  for (int i = 1; i <= e; i++) {
    x*=i;
  }
  return x;
}
int main() {
  int const size =10;
  double array[size];
  double e=0;
  double x=0.3;
  double z=1;
  for (int i = 0; i < 10 && e < 2.72; i++,z*=-1) {
    e=z*pow1(x,i)/fact(2*i);
    array[i]=e;
    cout<<array[i]<<endl;
  }
  int g,l;
  int c=0;
  for (size_t i = 0; i < size; i++) {
    l=array[i];
    g=array[i]*10;
    g=g-l*10;
    if (g==3){
      c++;
    }
  }
  cout<<"Кол-во чисел сумма десятков сотен и тысячи которых кратна 6:"<<c<<endl;
  return 0;
}
