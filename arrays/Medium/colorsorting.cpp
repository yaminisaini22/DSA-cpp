#include <iostream>
using namespace std;
#include <vector>
#include <map>

vector<int> BetterSolution(vector<int> &arr)
{
    int n = arr.size();
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count1++;
        }
        else if (arr[i] == 0)
        {
            count0++;
        }
        else
        {
            count2++;
        }
    }
    for (int i = 0; i < count0; i++)
        arr[i] = 0;
    for (int i = count0; i < count0 + count1; i++)
        arr[i] = 1;
    for (int i = count0 + count1; i < n; i++)
        arr[i] = 2;

    return arr;
}

vector<int> OptimalSolution(vector<int> &nums)
{
    int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid = 0;
        while(mid<= high){
            if(nums[mid] == 0){
               swap (nums[low], nums[mid]);
               low ++;
               mid ++;
            }
            else if(nums[mid] == 1){
                mid ++;
            }
            else if(nums[mid] == 2){
                 swap(nums[mid], nums[high]);
                 high --;
            }
        }
        return nums;
    }

int main()
{
    vector<int> arr = {1, 1, 1, 0, 0, 2, 2, 2, 0, 1, 1};
    cout << "Brute Solution :";
    vector<int> Brute = BetterSolution(arr);
    for (auto p : Brute)
    {
        cout << p << " ";
    }
    cout << endl
         << "Better Solution :";
    vector<int> Optimal = OptimalSolution(arr);
    for (auto p : Optimal)
    {
        cout << p << " ";
    }
    return 0;
}