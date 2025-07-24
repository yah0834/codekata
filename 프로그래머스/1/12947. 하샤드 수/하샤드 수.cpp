#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int original = x;
    int digitSum = 0;
    while (x > 0) {
        digitSum += x % 10;
        x /= 10;
    }
    return original % digitSum == 0;
}