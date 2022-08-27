#include<iostream>

#include<vector>

using namespace std;

int least_constructibleValue(vector<int> A)

{

  sort(A.begin(),A.end());

   int max=0;

    for(auto a:A)

    {

    if(a>max+1)

    {

    break;

    }

     

    max+=a;

    }

    return max+1;

}

int main()

{

    vector<int> v={12,2,1,15,2,4}; /*we can't produce 10 from the given vector which is the least constructible value*/

    cout<<least_constructibleValue(v);

    

    

    return 0;

}
