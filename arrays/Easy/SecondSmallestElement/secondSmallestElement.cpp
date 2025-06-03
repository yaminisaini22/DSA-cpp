# include <iostream>
# include <vector>

using namespace std;

int bruteSecondSmallest(vector <int> & arr){
 int n = arr.size();
 int smallest = arr[0];
 int ssmallest = INT_MAX;
 for (int i = 0;i<n;i++){
    if(arr[i]<smallest){
        smallest = arr[i];
    }
 }
 for (int j =0;j<n;j++){
    if(arr[j]>smallest && arr[j]<ssmallest){
        ssmallest = arr[j];
    }
 }
 return ssmallest;

}

int OptimalSecondSmallest(vector <int> & arr2){
 int n = arr2.size();
 int smallest = INT_MAX;
 int ssmallest = INT_MAX;
 for (int i = 0;i<n;i++){
    if(arr2[i]<smallest){
        ssmallest = smallest;
        smallest = arr2[i];
    }
    if(arr2[i]>smallest && arr2[i]<ssmallest){
        ssmallest = arr2[i];
    }
 }
 return ssmallest;

}


int main(){
    vector <int> arr = { 1,2,3,4,5,7,7,6};
    vector <int> arr2 = arr;
    cout <<"output of brute force solution"<<": "<<bruteSecondSmallest(arr)<<endl;
    cout <<"output of optimal solution"<<": "<<OptimalSecondSmallest(arr2);
}