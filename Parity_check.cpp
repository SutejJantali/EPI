/*If number of 1s is even in given number(binary format)
then the output is 0 else it's 1*/

#include<iostream>
using namespace std;

short parity_check(unsigned int x)
{
short res=0;
while(x)
{
res^=(x&1);
x=x>>1;
}
return res;
}

int main()
{
    cout<<parity_check(10);
    return 0;
}
