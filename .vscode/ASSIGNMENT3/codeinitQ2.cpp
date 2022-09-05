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
    for (i=0;i<N;i++)
    {
        cout<<"ENTER A NUMBER: ";
        cin>>a[i];
    }
    int freq[N]={0};
    for(i=0;i<N;i++)
    {
        if(freq[i]==1)
        continue;
        int c=0;
        for(j=0;j<N;j++)
        {
            if(a[i]==a[j])
            {
                freq[j]=1;
                c++;
            }
        }
        cout<<"Frequency of "<<a[i]<<": "<<c<<"\n";
    }
}

