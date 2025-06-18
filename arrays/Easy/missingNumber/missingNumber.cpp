#include <iostream>
using namespace std;
#include <vector>

    int OptimalmissingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n+1))/2;
        int s2 =0;
        for (int i =0;i<n;i++){
            s2 += nums[i]; 
        }
        int missingNum = sum -s2;
        return missingNum;
    }

    int main (){
    vector <int> nums = {0,1,2,3,5,6,7,8,9};
    cout << "Missing Number is :"<< OptimalmissingNumber(nums);
    return 0;
}