#include <iostream>
using namespace std;

    int getSecondSmallest(vector<int> &arr) {
        int n = arr.size();
        int smallest = arr[0];
        int ssmallest = INT_MAX;
        for(int i =1;i<n;i++){
            if(arr[i]<smallest ){
                smallest  = arr[i];
            }
        }
        for(int i =1;i<n;i++){
            if(arr[i]>smallest  && arr[i]<ssmallest ){
                ssmallest  = arr[i];
            }
        }
        return ssmallest;
    }

int main(){
    vector <int> arr = { 1,2,4,7,7,5};
    cout <<getSecondSmallest(arr);
}