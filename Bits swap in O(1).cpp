#include<iostream>

using namespace std;

long SwapBits(long x,int i,int j)
{
    if(((x>>i)&1) != ((x>>j)&1)) /*shifts and does and operation to check whether ith position and jth position has same but or not*/ 
    {
    unsigned long bit_mask=(1L<<i) | (1L<<j);/*1L means a long initialised to positive 1*/ /*resets back to its position after right shifting*/
    x^=bit_mask;
    }
    return x;
}

int main()
{
 
    cout<<SwapBits(28,0,3); /*answer is 21*/
    
    
    return 0;
}
