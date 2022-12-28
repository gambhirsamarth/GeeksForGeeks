//User function template for C++
class Solution{
public:
	 
	 int matSearch (vector <vector <int>> &mat, int N, int M, int X){
	     
	     int row_index=0;
	     int column_index=M-1;
	     
	     // check last element of each row
	     while(column_index>=0 && row_index<N){
	         
	         if(mat[row_index][column_index]==X) // if element is found return 1
                return 1;

            else if(mat[row_index][column_index]<X) //if element found is less than x, increment row index
                row_index++;

            else // else increment column index
                column_index--;
        }
        
        return 0;
	 }
};
