#include <iostream>
using namespace std;

int main()
{
    float a;
    float b;
    char K;
    
    cout<<"ENTER THE FIRST NUMBER ";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER ";
    cin>>b;
    cout<<"ENTER THE OPERATION TO BE PERFORMED ";
    cin>>K;
    switch(K)
    {
        case '+' : cout<<"THE SUM RESULT OF THE NUMBERS IS :";
                   cout<<a+b;
                   break;
    
        case '-' : cout<<"THE SUBSTRACTION RESULT OF THE NUMBERS IS :";
                   cout<<a-b;
                    break;
        case '*' : cout<<"THE MULTIPLICATION RESULT OF THE NUMBERS IS :";
                    cout<<a*b;
                    break;
        case '/' : 
        if(b==0)
        {
            cout<<"DIVISION NOT POSSIBLE";
        }
        else 
        {
            cout<<"THE DIVISION RESULT OF THE NUMBERS IS :";
            cout<<a/b;
        }
        break;
        default: cout<<"INVALID INPUT";
        }
}
