class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int,vector<int>,greater<int>>pq(arr+l,arr+r+1);
        int count=1;
        while(!pq.empty()&&count<k){
            pq.pop();
            count++;
        }
        if(pq.empty()){
            return -1;
        }
        return pq.top();
    }
};
