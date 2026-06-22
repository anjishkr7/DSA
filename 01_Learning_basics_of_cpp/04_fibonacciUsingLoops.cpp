#include<iostream>
using namespace std;

int main(){
  cout<<"Enter the number which you want to find the fibonacci series: ";
  int n;
  cin>>n;
  int first=0;
  int second=1;
  int next;

  for(int i=0;i<=n;i++){
    cout<<first<<" ";
    next=first+second;
    first=second;
    second=next;

  }

  return 0;
}

