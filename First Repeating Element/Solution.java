

// User function Template for Java

class Solution {
    // Function to return the position of the first repeating element.

    public static int firstRepeated(int[] arr, int n) {

        // Your code here

       HashMap<Integer,Integer> map=new HashMap<>();

        int res=n;

        for(int i=0;i<n;i++)

        {

            if(map.containsKey(arr[i]))

                res=Math.min(res,map.get(arr[i]));

            map.put(arr[i],i);

        }

        if(res==n)

            return -1;

        return res+1;

    }

}
