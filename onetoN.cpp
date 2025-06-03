#include<iostream>
using namespace std;
void oneToN(int n){
    if(n==0)return;
    oneToN(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    
    oneToN(n);

    return 0;
}