#include <iostream>
#include <vector>
#include <map>
using namespace std;

int bruteNumberOccurence(vector<int> &arr)
{
    // using hashing
    int n = arr.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto p : mpp)
    {
        if (p.second == 1)
        {
            return p.first;
        }
    }
}

int occurenceOfNumber(vector<int> &arr2, int k)
{
    int n = arr2.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr2[i]]++;
    }

    for (auto p : mpp)
    {
        if (p.second == k)
        {
            return p.first;
        }
    }
}

int occurence(vector<int> &arr)
{
    int n = arr.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int maxm = 0;
    int maxelement = -1;
    for (auto p : mpp)
    {
        if (p.second > maxm)
        {
            maxm = p.second;
            maxelement = p.first;
        }
    }
    return maxelement;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2, 1};
    vector<int> arr2 = {4, 1, 1, 2, 3, 5, 2, 2};
    int k;
    cin >> k;
    cout << "The number which only occured once is: " << bruteNumberOccurence(arr) << endl;
    cout << "the number which occured k times: " << occurenceOfNumber(arr2, k) << endl;
    cout << "The number whcih appeared the most is: " << occurence(arr2);
    return 0;
}
