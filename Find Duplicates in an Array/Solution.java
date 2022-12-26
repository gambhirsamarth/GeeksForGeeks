

class Solution {

    public static ArrayList<Integer> duplicates(int arr[], int n) {

        ArrayList<Integer> list=new ArrayList<>();

        Arrays.sort(arr);

        int count=0;

        for(int i=0;i<n-1;i++){

            if(arr[i]==arr[i+1] && count!=1){

                list.add(arr[i]);

                count++;

            }else if(arr[i]!=arr[i+1]){

                count=0;

            }

        }

        if(list.size()==0){

            list.add(-1);

        }

        return list;

    }

}
