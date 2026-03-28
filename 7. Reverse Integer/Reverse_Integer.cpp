#include <iostream>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
using namespace std;
int reverse(int x) 
{
    int revint=0;
        while (x!=0) 
        {
        int digit=x%10;
        x/=10;
        if(revint>INT_MAX/10||revint<INT_MIN/10)
            return 0;
        revint=revint*10+digit;
    }
    return revint;
}
int main() {
    int x=-123;
    cout<<reverse(x);
    return 0;
}