#include <iostream>
using namespace std;

int main(){
    int a,b;
    int caseNum = 1;
    while(cin>>a>>b){
        cout<<"Case "<<caseNum++<<": ";
        int sum = 0;
        if(a>b){
            int storeA = a;
            a = b;
            b = storeA;
        }

        if(a%2 == 0)    a+=1;
        for(int i=a; i<=b; i+=2){
            sum+=i;
        }
        cout<<sum<<'\n';
    }
}
