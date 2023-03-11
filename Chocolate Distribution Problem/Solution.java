class Solution
{
    public long findMinDiff (ArrayList<Integer> a, int n, int m)

    {

        // your code here

        Collections.sort(a);

        long ans = Long.MAX_VALUE;

        if (m == n) return (a.get(n-1)-a.get(0));

        for (int i=0; i<=n-m; i++) {

            ans = Math.min(a.get(i+m-1)-a.get(i), ans);

        }

        

        return ans;

    }
}
