#include<iostream>

using namespace std;

int main(){
string a , b ;

cin>>a>>b;

for(int i=0; i<a.size(); i++){
    for(int j=0; i<b.size(); i++){
    if(a[i]==b[i]){
        cout<<0;

    }
    else{
        cout<<1;
    }
}
}


}
