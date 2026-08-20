#include<iostream>
using namespace std;
void printAnjish(){
  cout<<"My Name Is: "<<"Anjish"<<endl;
}
void checkEvenOdd(int n){
  if (n%2==0) {
    cout<<"Even"<<endl;
  }else{
    cout<<"ODD"<<endl;
  }
}
void checkPostiveOrNegative(int n){
  if (n>0){
    cout<<"Positive"<<endl;
  }else if(n<0){
    cout<<"Negative"<<endl;
  }else{
    cout<<"Zero"<<endl;
  }
}
void printAvg(int a,int b,int c){
  int avg=(a+b+c)/3;
  cout<<avg<<endl;
}
void printTable(int n){
  for (int i=1;i<=10;i++){
    cout<<n*i<<endl;
  }
}
void convertToLC(char ch){
  char lc=ch-'A'+'a';
  cout<<lc<<endl;
}
void convertToUc(char ch){
  char uc=ch-'a'+'A';
  cout<<uc<<endl;
}
int main(){
  printAnjish();
  checkEvenOdd(10);
  checkPostiveOrNegative(-3);
  printAvg(10,20,30);
  printTable(2);
  convertToLC('Q');
  convertToUc('q');
  return 0;
}
