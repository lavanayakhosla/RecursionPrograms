#include<iostream>
using namespace std;
void NToOne(int n){
    if(n==0)return;

    cout<<n<<endl;
    NToOne(n-1);
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    
    NToOne(n);

    return 0;
}
