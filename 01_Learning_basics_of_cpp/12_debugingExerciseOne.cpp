//ques1:-Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.
// #include<iostream>
// using namespace std;

// int main() {
//   char c;
//     cin>>c;
//     if('a'<=c && c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c && c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }

//ques2:-Debug the code. It is trying to print the given pattern.
/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = i,count = 1;
        while(count<=i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
