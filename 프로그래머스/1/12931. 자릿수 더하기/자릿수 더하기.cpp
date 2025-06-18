#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    for(; n>0; n/=10) {
        answer += n%10;
    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution(123)" << endl;
    cout << "solution(987)"<< endl;
    

    return answer;
}