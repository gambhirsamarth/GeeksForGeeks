class Solution
{
    public:    

    vector <int> commonElements (int ar1[], int ar2[], int ar3[], int n1, int n2, int n3){

        set<int> s; // set is used to avoid duplicacy 
        int i = 0, j = 0, k = 0;

        while (i < n1 && j < n2 && k < n3) { // traverse through arrays

            if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) { // if element is common in all 3, insert in set
                
                s.insert(ar1[i]);
                i++;
                j++; 
                k++;
            }

            else if (ar1[i] < ar2[j])
                i++; // if element in a1 is less than a2, go further in a1

            else if (ar2[j] < ar3[k])
                j++; // if element in a2 is less than a3, go further in a2

            else
                k++; // else go further in a3
        }

        vector<int> ans; // create ans array
        
        for(auto i: s){
            ans.push_back(i); // insert elements from set to vector
        }

        return ans; // return ans vector
    }
};
