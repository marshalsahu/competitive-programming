#include<bits/stdc++.h>
using namespace std;
typedef long l;
int main(){

    l n;
    cin>>n;
    l arr[n],i,foundj,foundk;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    { foundj=0,foundk=0;
        for(l j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {   foundj=1;
                for(l k=j+1;k<n;k++)
                {
                    if(arr[k]<arr[j])
                     {cout<<arr[k]<<" ";
                      foundk=1;
                      break;
                     }
                }
                if(foundk!=1)
                cout<<"-1"<<" ";
                break;
            }
        }
        if(foundj!=1)
        cout<<"-1"<<" ";
    }


    return 0;
}
