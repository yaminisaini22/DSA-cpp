// using sets


# include<iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int> &arr){
    int n = arr.size();
    int i =0;
    for (int j =1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }

    }
    return i+1;
    
}

int main(){

    vector<int> arr = {1,1,1,2,2,3,3,3,3,4,4,5,5};
    cout << "Number of Duplicates " << removeDuplicate(arr);
    return 0;
}