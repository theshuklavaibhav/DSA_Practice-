#include<stdio.h>
#include<iostream>

using namespace std ;
int main(){
    int cols=0,rows=0;
    for(rows=0;rows<4;rows++){
        for(cols=0;cols<=rows;cols++){
            // cout<<'*';
            cout<<rows;
            // cout<<cols;
        }
        cout<<endl;
    }
    return 0;
}