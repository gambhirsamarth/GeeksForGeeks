

int missingNumber(int arr[], int n)
{
    int originalSum = (n*(n+1))/2;
    int arraySum = 0;
    
    for(int i = 0; i < n-1; i++){
        arraySum+=arr[i];
    }
    
    return (originalSum - arraySum);
    
}
