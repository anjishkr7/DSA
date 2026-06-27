#include <iostream>
#include <cmath>
using namespace std;
//Explicit TypeCasting:-
int main()
{
  // 1.double to int
  // double pi=3.13159245;
  // int intPi=(int)pi;
  // cout<<intPi<<endl;

  // 2.float to char
  // float num=65.5;
  // char character=(char)num;
  // cout<<character<<endl;

  //3. int to float
  int a =10;
  int b=3.0;
  float c=a/b;//this will give 3
  float d=a/(float)b;
  int e=(float)a/b;
  cout<<c<<endl;//3
  cout<<d<<endl;//3.3333
  cout<<e<<endl;//3
  return 0;
}
//note:-
//int/int->int
//int/float->float
//float/int->float
//float/float->float
