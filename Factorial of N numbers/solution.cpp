//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> ans;
        long long temp=1;
        for(int i =1; i <= N/temp; i++){
            if(temp <= N){
                temp *= i;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
