#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n";
    cin>>n;
    int notes;
    while(n!=0)
    {
        if(n>=100)
        {
            notes =  n/100;  
            n=(n-(notes*100));
            cout<<"Number of 100 rupee note want : "<<notes<<endl;
        }
        else if(n>=50)
        {
            notes=n/50;
            n=(n-(notes*50));
            cout<<"Number of 50 rupee note want : "<<notes<<endl;
        }
        else if(n>=20)
        {
            notes = n/20;
            n=(n-(notes*20));
            cout<<"Number of 20 rupee note want : "<<notes<<endl;
        }
        else{
            notes=n/1;
            n=(n-(1*notes));
            cout<<"Number of 1 rupee note want : "<<notes<<endl;
        }
    }

}