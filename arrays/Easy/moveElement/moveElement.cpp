#include <iostream>
using namespace std;
#include <vector> 

void moveElementToBack(vector<int> & arr , int k){
   int n = arr.size();
   int j = -1;
   for(int i =0;i<n;i++){
    if(arr[i] == k){
        j = i;
        break;
    }
   }
    if(j == -1){
        return;
    }
    for(int i =j+1;i<n;i++){
        if(arr[i]!= k){
           swap (arr[i], arr[j]);
           j++;
        }
    }
   }

void moveElementToFront( vector<int> & arr1 , int k){
      int i = 0;
      int j = arr1.size()-1;
      while (i<j){
        if(arr1[i] != k && arr1[j] ==k ){
            swap (arr1[i] , arr1[j]);
            i++;
            j--;
        }
        else{
            if (arr1[i] == k) i++;
            if(arr1[j]!= k) j--;
        }
      }
}

int main(){
    vector<int> arr = {1,0,9,3,9,0,0,9,8,7};
    vector<int> arr1 = arr;
    int k;
    cin>>k;
    moveElementToBack(arr ,k);
    moveElementToFront(arr1 , k);
    for(int i =0;i<arr.size();i++){
    cout <<arr[i]<<",";
    }
    cout <<endl;
    for(int i =0;i<arr.size();i++){
    cout <<arr1[i]<<",";
    }
    return 0;
}