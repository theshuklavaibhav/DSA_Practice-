#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    for(int rows=1;rows<=5;rows++){
        for(int cols=1;cols<=5;cols++){
            cout<<cols*cols<<' ';
        }
        cout<<'\n';
    }
    return 0;
}