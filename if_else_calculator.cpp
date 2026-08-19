#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    char op;
    cout<<"it my first basic calculator_______"<<endl;
    cout<<"here you can do any arthmatic problem--"<<endl;
    cout<<"enter first number:";
    cin>>n1;
    cout<<"enter the operator which you want to do:";
    cin>>op;
    cout<<"enter second number:";
    cin>>n2;
    if(op=='+') cout<<n1+n2;
    if(op=='-') cout<<n1-n2;
    if(op=='/') cout<<n1/n2;
    if(op=='*') cout<<n1*n2;
    if(op=='%') cout<<n1%n2;

return 0;} 
