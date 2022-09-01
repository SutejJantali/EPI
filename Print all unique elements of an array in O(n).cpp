#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Space complexity O(1)

int duplicate_remove(vector<int> A)
{
int j=1;

 for(int i=1;i<A.size();i++)
  {
     if(A[j-1]!=A[i])
    {
     A[j++]=A[i];
    }
  }

  for(int i=0;i<=A.size()-j;i++)
   cout<<A[i]<<" ";

  cout<<"\n";

return j;//valid number of entries

}
    
      

int main()
{
     vector<int> v={1,2,2,3,3,3,4};
    
    
    cout<<duplicate_remove(v);
    return 0;
}
