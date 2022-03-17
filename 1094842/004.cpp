#include <iostream>
using namespace std;

int main(){
    long long int num;
    while(cin>>num){
        while(num>=10){
            long long int store = 0;
            while(num>0){
                store += num%10;
                num/=10;
            }
            num = store;
        }
        cout<<num<<'\n';
    }
}
