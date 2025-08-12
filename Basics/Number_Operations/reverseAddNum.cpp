#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i=0,newNum,ans=0,digit;
    cout<<"Enter Number of digits: ";
    cin>>digit;
    while(i<digit){
        cout<<"Enter digits : ";
        cin>>newNum;
        cout<<endl;
        int mul=round(pow(10,i));
        ans=newNum*mul+ans;
        cout<<ans<<endl;
        i++;
    }
}