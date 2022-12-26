//User function Template for C++

void rotate(int arr[], int n)

{
    int s=0;
    int e=n-1;

    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;

    }
}
