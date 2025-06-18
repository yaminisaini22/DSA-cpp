#include <iostream>
using namespace std;
# include<vector>


int OptimalfindMaxConsecutiveOnes(vector<int>& nums , int k) {
        int n = nums.size();
        int maxi = 0;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(nums [i] == k){
                count ++;
            }
            else{
                count = 0;
            }
            maxi = max(maxi , count);
        }
        return maxi;
    }

int BrutefindMaxConsecutiveOnes(vector<int>& nums , int k) {
        int n = nums.size();
        int maxcount = 0;
        for(int i = 0;i<n;i++){
                int count = 0;
             for(int j =i;j<n;j++){
                  if(nums[j] ==k){
                    count++;
                    maxcount = max(maxcount , count);
                  }
                  else{
                    break;
                  }

             }
    }
    return maxcount;
}


int main(){
    vector <int> nums = {1,1,1,2,2,2,1,1,2,2,2,2,1,1,1};
    int k ;
    cin >>k;
    cout << "Maxing Consecutive of "<<k<< " is with optimal "<< OptimalfindMaxConsecutiveOnes(nums , k)<<endl;
    cout << "Maxing Consecutive of "<<k<< " is with brute force "<< BrutefindMaxConsecutiveOnes(nums , k);

}