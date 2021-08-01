//Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
//Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.
//Input:K = 2, N = 4
//Arr[] = {1, 5, 8, 10}
//Output:5
//Explanation:The array can be modified as {3, 3, 6, 8}. The difference between the largest and the smallest is 8-3 = 5.
#include <vector>
#include <algorithm>
#include <cstring>
#include <climits>


using namespace std;
int getMinDiff(int arr[], int n, int k) 
{ 
    if (n == 1) 
       return 0; 
  
   
    sort(arr, arr+n); 
  
    
    int ans = arr[n-1] - arr[0]; 
  
     
    int small = arr[0] + k; 
    int big = arr[n-1] - k; 
    if (small > big) 
       swap(small, big); 
  
    
    for (int i = 1; i < n-1; i ++) 
    { 
        int subtract = arr[i] - k; 
        int add = arr[i] + k; 
  
        
        if (subtract >= small || add <= big) 
            continue; 
  
        
        if (big - subtract <= add - small) 
            small = subtract; 
        else
            big = add; 
    } 
  
    return  min(ans, big - small); 
} 
  


int main() {
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        cout<<getMinDiff(arr, n, k)<<"\n";
    }
	//code
	return 0;
}