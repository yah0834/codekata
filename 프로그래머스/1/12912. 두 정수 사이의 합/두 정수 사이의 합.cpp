#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int start = min(a,b);
    int end = max(a,b);
    for (int i = start; i <= end; ++i){
        answer +=i;
    }
    return answer;
}