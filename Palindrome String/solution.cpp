class Solution{
public:	
	
	int isPalindrome(string s)
	{
	    check(s,0);
	}
	
	int check(string  &s , int i){
	    int n = s.size();
	    if(i>=n/2) return true;
	    if(s[i]!= s[n-i-1]) return false;
	    
	    return(check(s,i+1));
	    
	}

};
