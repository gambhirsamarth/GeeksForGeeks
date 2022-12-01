class Solution{
    public:
      int lenOfLongSubarr(int A[],  int N, int K) 
   { 
       
       int sum=0;
       int len=0;
       unordered_map<int,int>mp;
       mp[0]=-1;
       for(int i=0;i<N;i++){
           sum+=A[i];
           
           if(mp.find(sum-K)!=mp.end()){
               len=max(len,i-mp[sum-K]);
           }
           
           if(mp.find(sum)==mp.end()){
               mp[sum]=i;
           }
       }
       return len;
   } 

};
