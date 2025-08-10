#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    char name;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    // for(row=1;row<=n;row++){
    //     //------Printing Space----------------|
    //     for(col=n-row;col>=1;col--){
    //         cout<<"  ";
    //     }
    //     //-------Printing Alphabet------------|
    //     for(col=1;col<=row;col++){
    //         name='A'+(col-1);
    //         cout<<" "<<name;
    //     }
    //     cout<<endl;
    // }
    for(row=1;row<=n;row++){
        //------Printing Space----------------|
        for(col=n-row;col>=1;col--){
            cout<<"  ";
        }
        //-------Printing Alphabet------------|
        for(col=1;col<=row;col++){
            name='A'+(row-1);
            cout<<" "<<name;
        }
        cout<<endl;
    }
}