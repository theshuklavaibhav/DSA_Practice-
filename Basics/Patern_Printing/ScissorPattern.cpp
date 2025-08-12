#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    //------1st Half
    for(row=1;row<=n;row++)  {   
     //------Star
    for(col=1;col<=row;col++){
        cout<<"*";
    }
    //------Space
    for(col=1;col<=(n-row)*2;col++){
        cout<<" ";
    }
    //------Star
    for(col=1;col<=row;col++){
        cout<<"*";
    }
    cout<<endl;
}
    //---------2nd Half
    for(row=1;row<=n-1;row++){
        //--------star
        for(col=1;col<=n-row;col++){
            cout<<"*";
        }
        //--------Space
        for(col=1;col<row*2;col++){
            cout<<" ";
        }
        //--------star
        for(col=1;col<=n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    

}