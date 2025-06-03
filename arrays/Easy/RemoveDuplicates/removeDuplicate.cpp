#include <iostream>
using namespace std;
#include <vector>
#include <set>

int bruteRemoveDuplicate(vector<int> &arr)
{
    int n = arr.size();
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int k = st.size();
    int j = 0;
    for (int x : st)
    {
        arr[j] = x;
        j++;
    }
    return k;
}
int optimalRemoveDuplicate(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

  int main()
{
    vector<int> arr1 = {1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 5, 5};
    vector<int> arr2 = arr1; // Make a copy for the second method

    int k1 = bruteRemoveDuplicate(arr1);
    cout << "After brute method (unique count = " << k1 << "): ";
    for (int i = 0; i < k1; i++) cout << arr1[i] << " ";
    cout << endl;

    int k2 = optimalRemoveDuplicate(arr2);
    cout << "After optimal method (unique count = " << k2 << "): ";
    for (int i = 0; i < k2; i++) cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
