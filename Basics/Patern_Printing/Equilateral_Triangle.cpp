#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    // for(row=1;row<=n;row++){
    //     //-----------Printing Spaces------------------------------/
    //     for(col=1;col<=n-row;col++){
    //         cout<<"  ";
    //     }
    //     //----------Printing Star------------------------------
    //     for(col=1;col<=(2*row)-1;col++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    // for(row=1;row<=n;row++){
    //     //-----------Printing Spaces-------------------------------
    //     for(col=n-row;col>=0;col--){
    //         cout<<"  ";
    //     }
    //     //-----------Printing 1st halve--------------
    //     for(col=1;col<=row;col++){
    //         cout<<col<<' ';
    //     }
    //     //Print 2nd Halve
    //     for(col=row-1;col>=1;col--){
    //         cout<<col<<' ';
    //     }
    //     cout<<endl;
    // }
    //----------Bottom Up Triangle-----------------------
    for(row=n;row>=1;row--){
        // Spaces
        for(col=n-row;col>0;col--){
            cout<<"  ";
        }
        // Star
        for(col=1;col<=(row*2)-1;col++){
            cout<<" * ";
        }
        cout<<endl;
    }
    // for(row=1;row<=n;row++){
    //     //Printing Spaces
    //     for(col=1;col<=n-row;col++){
    //         cout<<"  ";
    //     }
    //     //Printing Stars
    //     for(col=(n*2)-1;col>=1;col--){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
}