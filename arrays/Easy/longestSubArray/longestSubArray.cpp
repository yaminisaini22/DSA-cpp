# include <iostream>
# include <map>
#include <vector>
using namespace std;

int longestBrute(vector <int> & arr , int k){
    int n = arr.size();
    int maxlen = 0;
    for(int i =0;i<n;i++){
        int sum = 0;
        for(int j =i;j<n;j++){
            sum += arr[j];
            if(sum == k){
                maxlen = max(maxlen , j-i+1);
            }
        }
    }
    return maxlen;
}

int longestBetter(vector <int> & arr , int k){
    int n = arr.size();
    int sum =0;
    int maxlength =0;
    int rem = 0;
    map <int , int> presum;
    for(int i =0;i<n;i++){
        sum += arr[i];
        if(sum ==k){
            maxlength = max(maxlength , i+1);
        }
        rem = sum-k;
       if(presum.find(rem) != presum.end()){
        int len = i- presum[rem];
        maxlength = max(maxlength , len);
       }
       if(presum.find(sum) == presum.end()){
            presum[sum] =i;
       }
    }
    return maxlength;
}

int longestOptimal(vector <int> & arr , int k){
    int n = arr.size();
    int i =0;
    int j =0;
    int maxlen =0;
    int sum = arr[0];
    while(j<n){
        if(sum>k && i<=j){
           sum -+ arr[i];
           i++;
        }
        if(sum ==k){
            maxlen = max(maxlen , j-i+1);
        }
        j++;
        if(j<n) sum += arr[j];
    }
    return maxlen;
}

int main(){
    vector <int> arr = {2, 3, 5, 1, 9};
    int k ;
    cin>>k;
    cout << "Longest Subarray using Brute Solution:"<< longestBrute(arr , k)<<endl;
    cout << "Longest Subarray using Better Solution:"<< longestBetter(arr , k)<<endl;
    cout << "Longest Subarray using Better Solution:"<< longestOptimal(arr , k)<<endl;
    return 0;
}