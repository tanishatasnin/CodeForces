#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
int  num1,num2,num3;
cin>>t;
while(t--)
{

	cin>>num1>>num2>>num3;
	string a_num1,b_num2;

	cin>>a_num1>>b_num2;

	sort(a_num1.begin(),a_num1.end());


	sort(b_num2.begin(),b_num2.end());

	int arr1=0,arr2=0;

	int ans=0;
        for(int arr1=0,arr2=0;arr1<num1 && arr2<num2;){
            if(ans==num3){
                cout<<b_num2[arr2++];
                ans=min(ans,0)-1;
                continue;
            }else if(ans==-num3){
                cout<<a_num1[arr1++];
                ans=max(0,ans)+1;
                continue;
            }
            if(a_num1[arr1]<b_num2[arr2]){
                cout<<a_num1[arr1++];
                ans=max(0,ans)+1;
            }else{
                cout<<b_num2[arr2++];
                ans=min(0,ans)-1;
            }
        }
return 0;

}
}
