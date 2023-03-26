#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;


        int  count=0;
        int arr1[t], arr2[t];

        for(int i=0; i<t ; i++){
            cin>>arr1[i];
            cin>> arr2[i];
        }

        for(int i =0 ; i<t; i++){
            for(int j=0; j<t ; j++){
                if(arr1[i]==arr2[j]){
                    count++;
                }

            }

        }



cout<<count<<endl;




}
