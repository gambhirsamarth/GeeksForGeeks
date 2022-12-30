//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k){
        
        int start=0;
        int end=N-1;
        
        while(start<=end){
        
            int mid=start+(end-start)/2;
        
            if(k>Arr[mid]) start=mid+1;
       
            else if(k<Arr[mid]) end=mid-1;
       
            else return mid;
        }
        return start;
    }
};
