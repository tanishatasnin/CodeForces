#include <iostream>
using namespace std;

int main(){

int n, count=0;
cin>>n;
int s[n];

for (int i=0 ; i<n; i++){
cin>>s[i];
if(s[i]==1){

count++;

}
}
if(count==0){
cout<<"EASY";
}
else{
cout<<"HARD";
}
	return 0;
}

