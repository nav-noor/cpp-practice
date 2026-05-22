#include<iostream>
#include<climits>
using namespace std;

int main() {
    int nums[] = {4, 5, 6, 2, 7};
    int n = sizeof(nums) / sizeof(nums[0]);

    int smallest = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        }
    }

    cout << "Smallest value: " << smallest << "\n";
    cout << "Index of smallest value: " << smallestIndex << "\n";

    return 0;
}