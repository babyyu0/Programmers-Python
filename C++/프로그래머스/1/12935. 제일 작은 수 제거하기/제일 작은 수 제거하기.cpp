#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int minIndex = 0;
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    arr.erase(arr.begin() + minIndex);
    if(arr.size() == 0) {
        arr.push_back(-1);
    }
    return arr;
}