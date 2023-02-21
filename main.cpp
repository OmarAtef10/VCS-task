#include <iostream>
#include "vector"

using namespace std;


int get_sum(vector<int> &nums) {
    int sum = 0;
    vector<int>::iterator i;
    for (i = nums.begin(); i < nums.end(); i++) {
        sum += *i;
    }
    return sum;
}

int get_min(vector<int> &nums) {
    int min = nums[0];
    vector<int>::iterator i;
    for (i = nums.begin(); i < nums.end(); i++) {
        if (*i < min) {
            min = *i;
        }
    }
    return min;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = get_sum(nums);
    cout << "Sum of Vector is " << sum << endl;
    cout<< "Min of Vector is " << get_min(nums) << endl;
    return 0;
}
