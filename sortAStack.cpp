#include<iostream>
#include<stack>

using namespace std;
void insert(stack<int>&s,int temp){
    if(s.size()==0 ||s.top()<=temp){
        s.push(temp);
        return;

    } 
    int val = s.top();
    s.pop();
    insert(s,temp);
    s.push(val);


}
void sortStack(stack<int>&s){
    if(s.size()==1) return;
    int temp = s.top();
    s.pop();
    sortStack(s);
    insert(s,temp);

}

int main(){
    int n;
    cin>>n;
    stack<int>s;

    for(int i =0;i<n;i++){
        int x ;
        cin>>x;
        s.push(x);
    }

    sortStack(s);

    for(int i =0;i<n;i++){
        cout<<s.top();
        s.pop();
    }


}