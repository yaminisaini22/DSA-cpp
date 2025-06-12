#include <iostream>
#include <vector>
using namespace std;

void reverse (vector<int> &arr3, int start , int end){

    while (start< end){
        swap(arr3[start] ,arr3[end]);
        start ++;
        end --;
    }
}

void rightRotateArray(vector <int> &arr1 ,int k){
    int n = arr1.size();
    k = k%n;
    vector <int> temp(k);
    for (int i = 0;i<k;i++){
        temp[i] = arr1[n-k+i];
    }
    for(int i=n-k-1;i>=0;i--){
        arr1[i+k] = arr1[i];
    }
    for(int i =0;i<k;i++){
        arr1[i]= temp[i];
    }
}
void leftRotateArray(vector <int> &arr2 ,int k){
    int n = arr2.size();
    k = k%n;
    vector <int> temp(k);
    for(int i =0;i<k;i++){
        temp [i] = arr2[i];
    }
    for(int i =0;i<n-k;i++){
        arr2[i] = arr2[i+k];
    }
    for(int i=0;i<k;i++){
        arr2[n-k+i] = temp[i];
    }

}

void optimalSoltuionLeft(vector <int> &arr3 , int k){
    int n = arr3.size();
    k = k%n;
    reverse(arr3 , 0, k-1); //reverse K elements
    reverse(arr3, k, n-1); // reverese left elements
    reverse(arr3 , 0 , n-1); // reverse whole
}


int main(){
    vector <int> arr1 = {1,2,3,4,5,6,7,8};
    vector <int> arr2 = arr1 ;
    vector <int> arr3 = arr1 ;
    int k = 2;
    cout<<"Right Rotation :";
    rightRotateArray(arr1 ,k);
    for(int i =0;i<arr1.size();i++){
        cout<< arr1[i]<<""<<",";
    }
    cout<<endl;
    cout<<"Left Rotation :";
    leftRotateArray(arr2, k);
        for(int i =0;i<arr2.size();i++){
        cout<< arr2[i]<<""<<",";
    }
      cout<<endl;
    cout<<"Left Rotation Optimal:";
    optimalSoltuionLeft( arr3, k);
            for(int i =0;i<arr3.size();i++){
        cout<< arr3[i]<<""<<",";
    }
    return 0;
}