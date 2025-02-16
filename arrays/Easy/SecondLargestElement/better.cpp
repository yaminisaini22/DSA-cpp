#include <iostream>
using namespace std;

    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int largest = arr[0];
        int slargest = -1;
        for(int i =1;i<n;i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        for(int i =1;i<n;i++){
            if(arr[i]<largest && arr[i]>slargest){
                slargest = arr[i];
            }
        }
        return slargest;
    }

int main(){
    vector <int> arr = { 1,2,4,7,7,5};
    cout <<getSecondLargest(arr);
}