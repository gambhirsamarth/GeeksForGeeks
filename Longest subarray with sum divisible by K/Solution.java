class Solution {
    public int longSubarrWthSumDivByK(int[] arr, int n, int k) {
        
        HashMap<Integer,Integer> m = new HashMap<>();
        int ans = 0;
        int sum = 0; // variable to give us sum till now
        
        m.put(0,-1); // Added at -1 index to handle the case of encountering a 0 remainder in array
        
        for(int i=0; i<n; i++){
            
            sum+=arr[i];
            int rem = sum%k;
            if(rem<0) rem+=k; // to handle negative remainders
            
            if(!m.containsKey(rem)) // not seen before in map
                m.put(rem,i); // insert it along with index;
            
            else // seen before in map
                ans = Math.max(ans,i-m.get(rem));
        }
        
        return ans;
    }
}
