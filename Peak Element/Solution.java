

/*Complete the function below*/

class Solution
{
	// Function to find the peak element
	// arr[]: input array
	// n: size of array a[]
	
	public int peakElement(int[] arr,int n)
    {
       //add code here.
        int s = 0;
        int e = n-1;
        int m = s+(e-s)/2;
       
        while (s<e) {
           
            if (arr[s] >= arr[s+1]) {
                return s;
            }
            if (arr[e] >= arr[e-1]) {
                return e;
            }
            if (arr[m] >= arr[m+1] && arr[m] >= arr[m-1]) {
                return m;
            }
            if (arr[m] < arr[m+1]) {
                s = m;
            }
            else if (arr[m] < arr[m-1]) {
                e = m;
            }
            m = s+(e-s)/2;
        }
        
        if (n==1){
            return 0;
        }
        
        return -1;
    }
	
}
