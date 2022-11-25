class Solution 

{

    public:

    bool isPossible(int A[], int N, int M,int mid){

        int st=1;

        int sum=0;

        for(int i=0;i<N;i++){

            sum+=A[i];

            if(sum>mid){

                st++;

                sum=A[i];

            }

        }

        return st<=M;

    }

    //Function to find minimum number of pages.

    int findPages(int A[], int N, int M) 

    {

        if(M> N){

            return -1;

        }

        int mx=0;

        int sum=0;

        for(int i=0;i<N;i++){

            sum+=A[i];

            mx=max(mx,A[i]);

        }

        int lo=mx;

        int hi=sum;

        int ans=-1;

    

        while(lo<=hi){

            int mid=lo+(hi-lo)/2;

            if(isPossible(A,N,M,mid)==true){

                ans=mid;

                hi=mid-1;

            }

            else{

                lo=mid+1;

            }

        }

        return ans;

    }

};
