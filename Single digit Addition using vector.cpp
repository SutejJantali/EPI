#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



vector<int> plusone(vector<int> A)
{
   A.back()++;
   for(int i=A.size()-1;i>0 && A[i]==10;i--)
   {
        A[i]=0;
        A[i-1]++; 
   }
 
    if(A[0]==10)
    {
    A[0]=0;
    A.insert(A.begin(),1);
    }
    return A;
}
    
    
    
    
    


int main()
{
     vector<int> v={1,2,9},v1;
       v1= plusone(v);
    for(int i=0;i<v1.size();i++)
    cout<<v1[i];
    
    
    return 0;
}
