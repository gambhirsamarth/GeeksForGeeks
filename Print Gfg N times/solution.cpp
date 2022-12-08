class Solution {
  public:
  
  int count = 0;
  
  void printGfg(int N) {
    
        if(count<N){ // Base Condition
          
            cout<<"GFG ";
            count++;
            printGfg(N);
          
        }
    
        else
          return;
    }
};
