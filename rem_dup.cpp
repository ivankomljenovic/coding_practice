/*
    LeetCode question:
    
    Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

    Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

    Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
    Return k.
*/

#include <vector>
#include <iostream>

using namespace std;

int removeDuplicates(vector<int>& nums){
    int result = 1;
    int curr_index = 0;

    if (nums.size() == 1)
        return 1;

    for (int i = 1; i < nums.size(); i++){
        if (nums[i] == nums[curr_index]){
            continue;
        }else{
            nums[++curr_index] = nums[i];
            result++;
        }
    }

    return result;
}

int main(){
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << removeDuplicates(nums) << endl;
    
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << endl;
    }
}