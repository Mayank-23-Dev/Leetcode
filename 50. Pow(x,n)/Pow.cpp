#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double myPow(double x, int n) 
{
    if (n==0)
        return 1;
    if (n<0)
    {    n*=(-1);
        x=1/x;
    }
    double ans=1;
    while (n>0)
    {
        if (n%2==1)
            ans*=x;
        x*=x;
        n/=2;
    }
    return ans;
}
int main() {
    double x=2.00000;
    int n=-2;
    cout<<myPow(x,n);
    return 0;
}