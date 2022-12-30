class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> arr, long long n, long long x){
        
        int s=0, e=n-1, temp=-1,mid; // temp is taken to store index of lower bound
        
        while(s<=e){
            
            mid = s+(e-s)/2;
            
            if(arr[mid]==x) return mid;
            
            else if( arr[mid]<x ){
                s=mid+1;
                
                if(arr[mid]>temp) temp = mid; // if mid > temp, the greatest lower bound is mid
            }
            
            else e=mid-1;
            
        }
        
        return temp;
        
    }
};
