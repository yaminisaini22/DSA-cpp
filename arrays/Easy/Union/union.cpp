#include <iostream>
using namespace std;
#include <vector>
#include <map>

vector<int> betterUnion(vector<int> &arr, vector<int> &arr1)
{
    int n = arr.size();
    int m = arr1.size();
    map<int, int> mpp;
    vector<int> Union;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        mpp[arr1[i]]++;
    }
    for (auto p : mpp)
    {
        Union.push_back(p.first);
    }
    return Union;
}
vector<int> OptimalUnion(vector<int> &arr, vector<int> &arr1)
{
    int n = arr.size();
    int m = arr1.size();
    int i = 0;
    int j = 0;
    vector<int> Union2;
    while (i < n && j < m)
    {
        if (arr[i] < arr[j])
        {
            if (Union2.size() == 0 || arr[i] != Union2.back())
            {
                Union2.push_back(arr[i]);
            }
            i++;
        }
        else if (arr[j] < arr[i])
        {
            if (Union2.size() == 0 || arr[j] != Union2.back())
            {
                Union2.push_back(arr[j]);
            }
            j++;
        }
        else if (arr[j] == arr[i])
        {
            if (Union2.size() == 0 || arr[i] != Union2.back())
            {
                Union2.push_back(arr[i]);
            }
            j++;
            i++;
        }
    }
    while (i < n)
    {
        if (Union2.size() == 0 || arr[i] != Union2.back())
        {
            Union2.push_back(arr[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (Union2.size() == 0 || arr[j] != Union2.back())
        {
            Union2.push_back(arr[j]);
        }
        j++;
    }
    return Union2;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 9};
    vector<int> arr1 = {1, 2, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> Union1 = betterUnion(arr, arr1);
    vector<int> Union2 = OptimalUnion(arr, arr1);
    cout << "Better Solution :" << endl;
    for (auto it : Union1)
    {
        cout << it << " , ";
    }
    cout << endl;
    cout << "optimal Solution :" << endl;
    for (auto it : Union2)
    {
        cout << it << " , ";
    }
    return 0;
}