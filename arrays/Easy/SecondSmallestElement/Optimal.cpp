#include <iostream>
using namespace std;

    int getSecondSmallest(vector<int> &arr) {
        int n = arr.size();
        int smallest = arr[0];
        int ssmallest = -1;
        for(int i =1;i<n;i++){
            if(arr[i]<smallest){
                ssmallest = smallest;
                smallest = arr[i];
            }
            if(arr[i]>smallest && arr[i]<ssmallest){
                ssmallest = arr[i];
            }
        }
        return ssmallest;
    }

int main(){
    vector <int> arr = { 10,2,1,7,7,5};
    cout <<getSecondSmallest(arr);
}

