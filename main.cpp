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

int get_average(vector<int> &nums) {
    int sum = get_sum(nums);
    return sum / nums.size();
}
//function that print pyramid
void print_pyramid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = get_sum(nums);
    int average = get_average(nums);
    cout << "Sum of Vector is " << sum << endl;
    cout << "Average of Vector is " << average << endl;
    cout<< "Min of Vector is " << get_min(nums) << endl;
    return 0;
}
