//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    
	    // find first occurence of zero
	    int k=0;
	    while(k<n){
	        
	        if(arr[k]==0) break;
	        
	        else k++;
	    }
	    
	    
	    
	    int i=k, j=k+1;
	    
	    // keep swapping zero with non zero elements till end of array
	    while(i<n && j<n){
	        
	        if(arr[j]!=0){
	            swap(arr[i],arr[j]);
	            i++;
	        }
	        
	        j++;
	        
	    }
	    
	}
};
