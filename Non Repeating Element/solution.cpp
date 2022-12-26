class Solution{
    public:
    int firstNonRepeating(int arr[], int n) { 
        
        map<int,int> m; // create a map
        
        for(int i = 0; i<n; i++){ // traverse through whole array and store frequencies in map
            
            m[arr[i]]++;
            
        }
        
        for(int i=0; i<n; i++ ){ // traverse through map
            
            if(m[arr[i]] == 1) // if freq is 1, return value
                return(arr[i]);
        }
        
        return 0;
        
    } 
  
};
