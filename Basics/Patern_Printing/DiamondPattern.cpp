#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    //----------1st Half
    for(row=1;row<=n;row++){
        //--------Spaces
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        //--------Star
        for(col=1;col<=row;col++){
            cout<<" *";
        }
        cout<<endl;
    }
    //--------2nd Half
    for(row=1;row<=n;row++){
        //--------Space
        for(col=1;col<=row-1;col++){
            cout<<" ";
        }
        //---------Star
        for(col=1;col<=n-(row-1);col++){
            cout<<" *";
        }
        cout<<endl;
    }
}