long long  numberOfPaths(int m, int n)
{
    if(m==1 || n==1){
        return 1;
    }
    else{
        return(numberOfPaths(m-1,n)+numberOfPaths(m,n-1));
    }
}
