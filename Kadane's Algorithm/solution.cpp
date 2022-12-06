class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    
    long long maxSubarraySum(int arr[], int n){

        

        // Your code here

        int max_sum=INT_MIN;

        int cur_sum=0;

        for(int i=0;i<n;i++){

            cur_sum=cur_sum+arr[i];

            

            if(cur_sum>max_sum)

                max_sum=cur_sum;

            if(cur_sum<0)

                cur_sum=0;

        }

        

        return max_sum;

        

    }
    
};
