# include <iostream>
# include <vector>

using namespace std;

int bruteSecondLargest(vector <int> & arr){
 int n = arr.size();
 int largest = arr[0];
 int slargest = -1;
 for (int i = 0;i<n;i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
 }
 for (int j =0;j<n;j++){
    if(arr[j]<largest && arr[j]>slargest){
        slargest = arr[j];
    }
 }
 return slargest;

}

int OptimalSecondLargest(vector <int> & arr2){
 int n = arr2.size();
 int largest = arr2[0];
 int slargest = -1;
 for (int i = 0;i<n;i++){
    if(arr2[i]>largest && arr2[i]>slargest){
        slargest = largest;
        largest = arr2[i];
    }
    if(arr2[i]<largest && arr2[i]>slargest){
        slargest = arr2[i];
    }
 }
 return slargest;

}


int main(){
    vector <int> arr = { 1,2,3,4,5,7,7,6};
    vector <int> arr2 = arr;
    cout <<"output of brute force solution"<<": "<<bruteSecondLargest(arr)<<endl;
    cout <<"output of optimal solution"<<": "<<OptimalSecondLargest(arr2);
}