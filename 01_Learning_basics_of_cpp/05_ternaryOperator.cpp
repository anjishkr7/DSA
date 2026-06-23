#include<iostream>
using namespace std;
int main(){
  cout<<"Enter ur age: ";
  int age;
  cin>>age;
  string result=age>18 ? "Can drive": "Cannot Drive";
  cout<<result<<endl;
  return 0;
}
