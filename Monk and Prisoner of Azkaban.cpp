#include<bits/stdc++.h>
using namespace std;
typedef long l;
int main()
{
    l n;
    cin>>n;
    l arr[n];
    for(l i=0;i<n;i++)
    cin>>arr[i];
    l x[n],y[n],j;
    x[0]=-1;
    for(l i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
         x[i]=i;
        else if(x[i-1]!=-1)
        {
            j=x[i-1]-1;
            while(j>=0)
            {
                if(arr[j]>arr[i])
                { x[i]=j+1;
                  break;
                }
                j=x[j]-1;
            }
            if(j<0)
            x[i]=-1;
        }
        else
        x[i]=-1;
    }
    y[n-1]=-1;
    for(l i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
          y[i]=i+2;
        else if(y[i+1]!=-1)
        {
            j=y[i+1]-1;
            while(j>=0)
            {
                if(arr[j]>arr[i])
                {
                    y[i]=j+1;
                    break;
                }
                j=y[j]-1;
            }
            if(j<0)
            y[i]=-1;
        }
        else
        y[i]=-1;
    }
    for(l i=0;i<n;i++)
    cout<<x[i]+y[i]<<" ";

    return 0;
}
