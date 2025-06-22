#include <iostream>
using namespace std;
#include <vector>
#include <map>

vector <int> bruteTwoSum( vector<int> &arr , int target){
    int n = arr.size();
    for(int i =0;i<n;i++){
        int sum =0;
        for(int j = i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                return {i,j};
                break;
            }
        }
    }
    return {};
}
vector<int> OptimaltwoSum(vector<int>& nums, int target) {
       int n = nums.size();
       map <int,int> mpp;
       for (int i =0;i<n;i++){
        int arr = nums[i];
        int rem = target - arr;
        if(mpp.find(rem) != mpp.end()){
            return {mpp[rem] , i};
        }
        mpp[nums[i]] = i;
       } 
       return {};
    }

string OptimalBooleanSolution(vector<int>& nums, int target) {
       int n = nums.size();
       int left = 0;
       int right = n-1;
       while(left <= right){
        int sum = 0;
        sum = nums[left] + nums[right];
        if(sum >target){
            right --;
        }
        else if (sum <target){
            left ++;
        }
        else if (sum == target){
            return "YES";
        }
       }
       return "NO";
    }
    
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 9};
    int target;
    cin >> target;
    vector <int> Brute = bruteTwoSum(arr , target);
    cout << "Brute Solution :";
    for(auto p :Brute){
        cout << p << " ";
    }
    cout << endl << "Better Solution :";
    vector <int> Optimal = OptimaltwoSum(arr , target);
    for(auto p :Optimal){
        cout << p << " ";
    }
    cout << endl <<"optimal Solution :"<<OptimalBooleanSolution(arr , target);
    return 0;
}