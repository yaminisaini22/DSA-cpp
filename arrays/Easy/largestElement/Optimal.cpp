#include<iostream>
using namespace std;

int largestElement (int arr[], int n){
    int largest = arr[0];
    for (int i =1;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int arr[5] ={10,2,1,5,7};
    cout << largestElement(arr,5);
    return 0;
}