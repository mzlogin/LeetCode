#include <vector>
using namespace std;

vector<int> createVector(int* nums, int len) {
    vector<int> vec;
    for (int i = 0; i < len; i++) {
        vec.push_back(nums[i]);
    }
    return vec;
}

bool arrayEqualsVector(int* nums, int len, vector<int>& vec) {
    if (len != vec.size()) {
        return false;
    }
    for (int i = 0; i < len; i++) {
        if (i >= vec.size() || nums[i] != vec[i]) {
            return false;
        }
    }
    return true;
}

