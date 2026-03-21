#include <iostream>
using namespace std;
int findNthDigit(int n) 
{
    int num=1,count=0;
    while (num<=n)
    {
        int reverse=0,temp=num,digits=0;
        while (temp) 
        {
            reverse=reverse*10+temp%10;
            temp/=10;
            digits++;
        }
        temp=reverse;
        while(digits--)
        {
            count++;
            if(count==n)
            {
                return temp%10;
            }
            temp/=10;
        }
        num++;
    }
    return -1;
}
int main()
{
    int n=11;
    cout<<findNthDigit(n);
    return 0;
}
