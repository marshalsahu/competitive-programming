/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
typedef long l;
int main()
{
    l n,t;
    cin>>t;
    while(t--)
    {
       int curr,pre;
       cin>>n>>curr;
       char ch;
       for(l i=0;i<n;i++)
       {
           cin>>ch;
           if(ch=='P')
           {
               pre=curr;
               cin>>curr;
           }
           else
           {
               int temp=curr;
               curr=pre;
               pre=temp;
           }
       }
       cout<<"Player "<<curr<<endl;
    }
    return 0;
}
