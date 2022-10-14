#include <iostream>
using namespace std;
  
int main()
{
    int a[4] = {0,1,0,1};
    int b[4] = {1,1,0,0};
    cout<<"\n"<<"NOT GATE:"<<"\n";
    for (int i = 0;i<4;i++)
    {
        cout<<" NOT "<<b[i]<<" = "<<!b[i]<<"\n";
        
    }
    cout<<"\n"<<" AND GATE: "<<"\n";
    for (int i = 0;i<4;i++)
    {
        int temp=a[i]&&b[i];
        cout<<b[i]<<" AND "<<a[i]<<" = "<<temp<<"\n";
    }
    cout<<"\n"<<" OR GATE: "<<"\n";
    for (int i = 0; i<4;i++)
    {
        int temp=a[i]||b[i];
        cout<<a[i]<<" OR "<<b[i]<<" = "<<temp<<"\n";
    }
    return 0;
}
