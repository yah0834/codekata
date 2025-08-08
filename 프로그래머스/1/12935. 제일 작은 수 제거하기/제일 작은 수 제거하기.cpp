#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) {
        return vector<int>{-1};
    }
     int minVal = arr[0];
    for (int x : arr) {
        if (x < minVal) minVal = x;
    }
     vector<int> answer;
    answer.reserve(arr.size() - 1);
    for (int x : arr) {
        if (x != minVal) {
            answer.push_back(x);
        }
    }
      return answer;
}