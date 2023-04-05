class Solution{
    static ArrayList<Integer> leaders(int arr[], int n){
        ArrayList<Integer> result = new ArrayList<>();
        
        // Assuming that the last element is the leader.
        int currentLeader = arr[n-1];
        result.add(currentLeader);
        
        for (int i = n-2; i >= 0; i--) {
            if (arr[i] >= currentLeader) {
                currentLeader = arr[i];
                result.add(currentLeader);
            }
        }
        
        // Reverse the result list to get the leaders in the correct order.
        Collections.reverse(result);
        
        return result;
    }
}
