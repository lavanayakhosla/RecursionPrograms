#include<iostream>
using namespace std;
void oneToN(int n){
    if(n==0)return;

    cout<<n<<endl;
    oneToN(n-1);
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    
    oneToN(n);

    return 0;
}
