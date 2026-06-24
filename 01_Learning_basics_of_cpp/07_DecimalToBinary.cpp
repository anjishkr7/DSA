#include <iostream>
#include <cmath>
using namespace std;
int DecimalToBinaryByBitwiseMethod(int n){
  int BinaryNum=0;
  int i=0;
  while(n>0){
    int bit =(n & 1);
    BinaryNum=bit*pow(10,i++)+BinaryNum;
    n=n>>1;
  }
  return BinaryNum;
}
int DecimalToBinary(int n)
{
  // division Method:-
  int binaryNum = 0;
  int i=0;
  while (n > 0)
  {
    int bit = n % 2;
    binaryNum=bit*pow(10,i++)+binaryNum;
    n /= 2;
  }
  return binaryNum;
}
int main()
{
  int n;
  cout << "Enter ur num: ";
  cin >> n;
  int binary = DecimalToBinary(n);
  // cout << binary;
  int binary2=DecimalToBinaryByBitwiseMethod(n);
  cout<<binary2;
  return 0;
}
