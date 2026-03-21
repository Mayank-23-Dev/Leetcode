#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 0) return false;
        int left = 1, right = num;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long square = (long long)mid * mid;
            if (square == num) return true;
            else if (square < num) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};
int main() {
    Solution solution;
    int num = 16;
    bool result = solution.isPerfectSquare(num);
    cout << (result ? "true" : "false") << endl;
    return 0;
}