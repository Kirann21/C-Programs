#include<iostream>

using namespace std;

int main ()
{ 
int N=0;
    int i;
    int j; 
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>N;
    int a[N]={0};
    for(i=0;i<N;i++)
    {
            a[i]=i+1;
    }
   for(i=0;i<N;i++)
   {
        if(a[i]%2==0)
        {
            if(a[i]%5==0)
            {
                cout<<a[i]<<": CARTWHEEL";
            }
            else
            {
                cout<<a[i]<<": CART\n";
            }
        }
        else if(a[i]%5==0)
        {
            cout<<a[i]<<": WHEEL\n";
        }
        else
        {
            cout<<a[i]<<"\n";
        }
    }
}
