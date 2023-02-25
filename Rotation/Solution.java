// User function Template for Java

class Solution {
    int findKRotation(int arr[], int n) {
        int s=0;
        int e=n-1;
        
        while(s<=e){
            
            int mid = s+(e-s)/2;
            
            if(mid<e && arr[mid]>arr[mid+1])
                return mid+1;
            
            if(mid>s && arr[mid]<arr[mid-1])
                return mid;
                
            if(arr[mid]<=arr[s])
                e=mid-1;
                
            else s=mid+1;
        }
        return 0;
    }
}
