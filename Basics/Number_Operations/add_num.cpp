#include<iostream>
using namespace std;
int main(){
    int ans=0,newNum,digit,i=1;
    cout<<"Enter Number of Digits : ";
    cin>>digit;
    while(i<=digit){
        cout<<"Enter digits of Number: ";
        cin>>newNum;
        ans=ans*10+newNum;
        cout<<endl<<ans;
        i++;
        cout<<endl;
    }

}