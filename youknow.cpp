#include<iostream>
#include<algorithm>

using namespace std;

int main (){
int total=0;
int numDoc;

cin>>numDoc;
int a, b ;

for(int i =0; i<numDoc ; i++) {
    cin>>a>>b ;
    if(total<a)
        total=a;
    else{
        while(a<=total){
            a+=b;
        }
        total=a;
    }
}
cout<<total<<endl;
return 0;


}
