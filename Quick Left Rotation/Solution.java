class Solution
{
    void leftRotate(long arr[], int k,int n)
    {
        long temp[] = new long[n];
        k = k%n;
        int count = 0;
        for(int i = k;i<n;i++){
            temp[count] = arr[i];
            count++;
        }
        for(int j = 0;j<k;j++){
            temp[count] = arr[j];
            count++;
        }
        for(int i =0;i<n;i++){
            arr[i] = temp[i];
        }
    }
}
