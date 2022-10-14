#include <iostream>
using namespace std;

void halfadder (int B, int C,int D)
{
    int sum, carry, multiply;
    sum = B^C^D;
    carry = B&C&D;
    multiply = B*C*D;
    
    cout<<"sum = "<<sum<<endl;
    cout<<"carry = "<<carry<<endl;
    cout<<"multiply = "<<multiply<<endl;
    
}
int main ()
{
    int B=2;
    int C=4;
    int D=6;
    halfadder (B,C,D);
    return 0;
}
