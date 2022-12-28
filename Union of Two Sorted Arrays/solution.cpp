class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        
        set<int> ans;
        set<int>::iterator itr;
        
        for(int i=0; i<n;i++){
            ans.insert(arr1[i]);
        }
        
        for(int i=0; i<m; i++){
            ans.insert(arr2[i]);
        }
        
        vector<int> res;
        
        for(itr = ans.begin(); itr!=ans.end(); itr++){
            res.push_back(*itr);
        }
        
        return res;
    }
};
