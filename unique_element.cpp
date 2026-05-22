#include<iostream>
#include<climits>
using namespace std;

int main() {
    int nums[] = {1,2,5,6,7,2,4,5,6,7};
    int n = sizeof(nums) / sizeof(nums[0]);
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=0;j<n;j++){
            if(i != j && nums[i]==nums[j]){
                count++;
            }
        }
        if(count==1){
            cout<<"unique value is:"<<nums[i]<<"\n";
        }
    }
    return 0;
}