# include <iostream>
using namespace std;

bool checkArraySorted(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
           return false;
        }
    }
    return true;
}
bool brute(int arr[], int n){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]>arr[j]){
           return false;
        }
    }
    }
    return true;
}
int main()
{
 int arr[6] ={1,5,3,3,4,4};
 cout << checkArraySorted(arr ,6);
 cout <<endl;
 cout<<brute(arr,6);
 return 0;

}
