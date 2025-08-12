#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    for(row=n;row>=1;row--){
        //--------Star
        for(col=1;col<=row;col++){
            cout<<" * ";
        }
        //-------Space
        for(col=(n-row)*2;col>0;col--){
            cout<<"   ";
        }
        //-------Star
        for(col=1;col<=row;col++){
            cout<<" * ";
        }
        cout<<endl;
    }
    //--------------2nd Half-------------------------|
    for(row=1;row<=n;row++){
        //-------Star
        for(col=1;col<=row;col++){
            cout<<" * ";
        }
        //-------Space
        for(col=(n-row)*2;col>0;col--){
            cout<<"   ";
        }
        //--------Star
        for(col=1;col<=row;col++){
            cout<<" * ";
        }
        cout<<endl;
    }
}