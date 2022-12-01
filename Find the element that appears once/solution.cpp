//User function template for C++
class Solution{
public:	
	int search(int arr[], int N){
	    for(int  i=0; i<N; i+=2){
	        if(arr[i]!=arr[i+1]){
	            return arr[i];
	        }
	    }
	    
	}
};
