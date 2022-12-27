//User function template for C++

class Solution{

  public:

    // Function to find majority element in the array

    // a: input array

    // size: size of input array

    int majorityElement(int a[], int size){

        if(size==1)
            return a[0];

        sort(a,a+size);

        for(int i=0;i<size/2+1;i++){

            if(a[i+size/2]==a[i])
            return a[i];
        }
        
        return -1;

    }
};
