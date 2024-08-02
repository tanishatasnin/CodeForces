#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x,e=0,o=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0)e++;
            else o++;
        }
        cout<<min(e,o)<<endl;
    }
}
