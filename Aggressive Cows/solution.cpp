// User function Template for C++

class Solution {
public:

    bool isPossible(vector<int> &stalls,int cow,int minDist,int n)

    {

        int lastPlaced = stalls[0];

        int cntCow = 1;

        

        for(int i=1;i<n;i++)

        {

            if(stalls[i]-lastPlaced>=minDist)

            {

                cntCow++;

                lastPlaced=stalls[i];

            }

        }

        if(cntCow>=cow) return true;

        else return false;

    }

    

 

    int solve(int n, int k, vector<int> &stalls) {

    

        // Write your code here

        sort(stalls.begin(),stalls.end());

    

        int low = 1;

        int high = stalls[n-1] - stalls[0];

        

        while(low<=high)

        {

            int mid = low + (high-low)/2;

            

            if(isPossible(stalls,k,mid,n))

            {

                low=mid+1;

            }

            else {

                high=mid-1;

            }

        }

        return high;

    }

};
