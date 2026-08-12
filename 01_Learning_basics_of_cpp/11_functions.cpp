#include<iostream>
#include<cmath>
using namespace std;
//function Declaration:-
// int sum(int x, int y);
//we can't define function after calling it or after int main() function , to solve this problem u can either declare it before and can later define it or simple write the whole fuction (declaration+defination) brfore main() function

//printing 1 to 100
void printCounting(){
  for(int i=1;i<=100;i++){
    cout<<i<<endl;
  }
}
//simple interest
float simpleInterest(int p,int r ,int t){
  float simpleInterest=(float)p*r*t/100;
  return simpleInterest;
}
//prime num from 1 to 100
void primeNum(){
  for(int i=2;i<=100;i++){
    bool flag=true;
    for(int j=2;j*j<=i;j++){
      if(i%j==0){
        flag=false;
        break;
      }
    }
    if(flag){
      cout<<i<<endl;
    }
  }

}
//voting eligibality
void isEligibleForVoting(int age){
  if(age>18){
    cout<<"ELIGIBLE"<<endl;
  }else{
    cout<<"NOT ELIGIBLE"<<endl;
  }
}
float sipCalculator(float p,float annualRate, int years){
  float r=annualRate/12/100;
  int n=years*12;
  float sip=p*float(pow(1+r,n)-1)/r*(1+r);
  return sip;
}

int main(){
  // printCounting();

  // float interest=simpleInterest(20,20,20);
  // cout<<interest<<endl;

  // primeNum();
  // isEligibleForVoting(18);

  cout<<sipCalculator(1000,12,10)<<endl;
  return 0;
}
