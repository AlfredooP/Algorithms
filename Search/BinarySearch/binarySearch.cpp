#include <vector>
#include <iostream>

using namespace std;
int binarySearch(vector<int> &nums, int target){
    int low = 0; 
    int high = nums.size() - 1;
    int mid = 0;

    while (low <= high)
    {
        //Get the middle between low and high.
        mid = (low + high) / 2;

        //if target is present at mid
        if (nums[mid] == target)
            return mid;
        
        //if target is greater, ignore left half
        if (nums[mid] < target)
            low = mid + 1;
        //if target is smaller, ignore right half
        else
            high = mid - 1;
    }

    return low;
    //return -1 in case, the target is not found
}

int main(){

    //The problem is about return the index of the target if it's found, 
    //or where it would be in the array.
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    cout << "Position: " << binarySearch(nums,target) << endl;

    return 0;
}