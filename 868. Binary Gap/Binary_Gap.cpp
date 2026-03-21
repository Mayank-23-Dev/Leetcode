#include <iostream>
#include <vector>
using namespace std;
int binaryGap(long long n) {
    int Temp=n;
    long long Bin=0;
    while(n>0){
        Bin=Bin*10+n%2;
        n/=2;
    }    
    n=Bin;
    Bin=0;
    while (n)
    {
        Bin=Bin*10+n%10;
        n/=10;
    }
    if(Temp%2==0)
        Bin=Bin*10;
    return Bin;
}
int main(){
    cout<<binaryGap(22);
}