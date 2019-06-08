#include <vector>
using namespace std;

vector<int> createVector(int* nums, int len) {
    vector<int> vec;
    for (int i = 0; i < len; i++) {
        vec.push_back(nums[i]);
    }
    return vec;
}

bool arrayEqualsVector(int* nums, int len, vector<int> vec) {
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

vector<vector<int> > create2DVector(int* nums, int rows, int cols) {
    vector<vector<int> > vec;
    for (int m = 0; m < rows; m++) {
        vector<int> row;
        for (int n = 0; n < cols; n++) {
            row.push_back(nums[m*cols+n]);
        }
        vec.push_back(row);
    }
    return vec;
}

bool arrayEqualsVector(int* nums, int rows, int cols, vector<vector<int> > vec) {
    if (rows != vec.size()) {
        return false;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (nums[i*cols+j] != vec[i][j]) {
                return false;
            }
        }
    }

    return true;
}

// just suit cases can compare with == and !=
template<typename T>
bool arrayEqualsVector(T* array, int len, vector<T> vec) {
    if (len != vec.size()) {
        return false;
    }
    for (int i = 0; i < len; i++) {
        if (i >= vec.size() || array[i] != vec[i]) {
            return false;
        }
    }
    return true;
}
