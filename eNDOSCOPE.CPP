#include <bits/stdc++.h>
using namespace std;

int n=50,m=50,x,y,l;
vector<vector<int>> p(n,vector<int>(m,0)) ;
vector<vector<int>> v(n,vector<int>(m,0)) ;

bool right(int r,int c,int v)
{
    if(c+1>=m) return false;
    if(v==1||v==3||v==4||v==5) return true;
    return false;
}

bool left(int r,int c,int v)
{
    if(c-1<0) return false;
    if(v==1||v==3||v==6||v==7) return true;
    return false;
}

bool down(int r,int c,int v)
{
    if(r+1>=n) return false;
    if(v==1||v==2||v==5||v==6) return true;
    return false;
}

bool up(int r,int c,int v)
{
    if(r-1<0) return false;
    if(v==1||v==2||v==4||v==7) return true;
    return false;
}

void run(int x,int y,int cur_jump)
{
    if(cur_jump==0||p[x][y]==0) return;
    //cout<<x<<" "<<y<<" "<<cur_jump<<endl;
    v[x][y]=1;

    if(right(x,y,p[x][y])&&left(x,y+1,p[x][y+1]))
    {
        run(x,y+1,cur_jump-1);
    }
    if(right(x,y-1,p[x][y-1])&&left(x,y,p[x][y]))
    {
        run(x,y-1,cur_jump-1);
    }
    if(down(x,y,p[x][y])&&up(x+1,y,p[x+1][y]))
    {
        run(x+1,y,cur_jump-1);
    }
    if(down(x-1,y,p[x-1][y])&&up(x,y,p[x][y]))
    {
        run(x-1,y,cur_jump-1);
    }
}


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y>>l;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>p[i][j];
                v[i][j]=0;
            }
        }
        run(x,y,l);

        int len = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]) len++;
            }
        }
        cout<<len<<endl;

    }
    return 0;}
