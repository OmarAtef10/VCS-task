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

int get_average(vector<int> &nums) {
    int sum = get_sum(nums);
    return sum / nums.size();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = get_sum(nums);
    int average = get_average(nums);
    cout << "Sum of Vector is " << sum << endl;
    cout << "Average of Vector is " << average << endl;
    return 0;
}
