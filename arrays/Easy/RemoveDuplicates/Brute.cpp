// using sets


# include<iostream>
#include <vector>
#include <set>
using namespace std;

int removeDuplicate(vector<int> &arr){
    int n = arr.size();
    set <int> st;
    for (int i =0; i<n;i++){
        st.insert(arr[i]);
    }
    int k = st.size();
    int j =0;
    for(int x :st){
        arr[j] = x;
        j++;
    }
    return k;
}

int main(){

    vector<int> arr = {1,1,1,2,2,3,3,3,3,4};
    cout << "Number of Duplicates " << removeDuplicate(arr);
    return 0;
}