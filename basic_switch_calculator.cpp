#include<iostream>
using namespace std;
int main(){
int n1,n2;
char op;
cout<<"enter the number and operation here---"<<endl;
cin>>n1>>op>>n2;
switch(op){
    case '+': cout<<n1+n2;break;
    case '-': cout<<n1-n2;break;
    case '*': cout<<n1*n2;break;
    case '/':cout<<n1/n2;break;
    default:cout<<"invalid operation";
}
    
    return 0;
}