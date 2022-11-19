vector<int> find(int arr[], int n , int x )
{
    vector<int>v;
    int i;
    for(i = 0;i < n; i++)
    {
        if(arr[i] == x)
        {
            v.push_back(i);
            break;
        }
    }
    for(i = n - 1; i >= 0; i-- )
    {
        if(arr[i] == x)
        {
            v.push_back(i);
            break;
        }
    }
    if(v.size() == 0)
    {
        return {-1 , -1};
    }
    return v;
}
