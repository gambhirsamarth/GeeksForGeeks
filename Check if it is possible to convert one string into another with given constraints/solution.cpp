// User function Template for C++

class Solution {
  public:
    int isItPossible(string s, string t, int m, int n) {
        int i = 0, j = 0;
        
        if(m != n) return false;  //  if length of strings don't natch return false
        
        while(i < m || j < n) {
            
            while(s[i] == '#') i++;
            while(t[j] == '#') j++;
            
            if((i < m && j >= n) || (i >= m && j < n)) return false;
            
            if(s[i] == 'A') {
                if(i < j || t[j] == 'B') return false;
            }
            
            else if(s[i] == 'B') {
                if(i > j || t[j] == 'A') return false;
            }
            
            i++, j++;
        }
        
        return true;
    }
};
