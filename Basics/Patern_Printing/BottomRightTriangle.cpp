#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    for(rows=5;rows>0;rows--){
        for(cols=1;cols<rows;cols++){
            // cout<<cols;
            cout<<rows;
        }
        cout<<endl;
    }
    return 0;
}