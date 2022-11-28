//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) 

 {

      map<int,vector<int>>mp;

      int j=0;

      for(int i=0;i<n;i++)

      {

          if(a[i]<0)

          {

             j++;

             continue;

          }

          mp[j].push_back(a[i]);

      }

      if(mp.size()==0)

      {

          return {-1};

      }

      vector<int>v;

      int mini=-1;

      for(auto it:mp)

      {   

          int sum=0;

          for(auto y:it.second)

          {

              sum+=y;

          }

          if(sum>mini)

          {    v.clear();

               for(auto x:it.second)

              {

                 v.push_back(x);

              }

             mini=sum;

          }

     

      }

     

      return v;

      

 }
};
