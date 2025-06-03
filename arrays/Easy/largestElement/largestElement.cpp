#include <iostream>
using namespace std;
#include <vector>


int largestElement(vector <int> &arr)
{
    int n = arr.size();
    int largest = arr[0];
    for (int i =0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    
    }
    return largest;
}

int main(){
     vector<int>  arr = {1 ,2, 3, 4,5,6,7,7,8};
    cout<< "largest Element is "<< largestElement(arr);
    return 0;
}