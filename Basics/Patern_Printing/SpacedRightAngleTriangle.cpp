// #include<iostream>
// using namespace std;
// int main(){
//     int rows,cols;
//     for(rows=1;rows<=4;rows++){
//         //Printing spacees
//         for(cols=1;cols<=4-rows;cols++){
//             cout<<' '; 
//         }
//         //Printing *
//         for(cols=1;cols<=rows;cols++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int rows,cols,n;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    // for(rows=1;rows<=n;rows++){
    //     for(cols=1;cols<=rows;cols++){
    //         cout<<cols<<' ';
    //     }
    //     cout<<endl;
    // }
    // for(rows=1;rows<=n;rows++){
    //     for(cols=rows;cols>=1;cols--){
    //         cout<<cols<<' ';
    //     }
    //     cout<<endl;
    // }
    // for(rows=1;rows<=n;rows++){
    //     for(cols=1;cols<=rows;cols++){
    //         char name='a';
    //         name=name+(cols-1);
    //         cout<<name<<' ';
    //     }
    //     cout<<endl;
    // }
    // for(rows=n;rows>=1;rows--){
    //     for(cols=1;cols<=rows;cols++){
    //         cout<<cols<<' ';
    //     }
    //     cout<<endl;
    // }
    // for(rows=n;rows>=1;rows--){
    //     for(cols=n;cols>=n-(rows-1);cols--){
    //         cout<<cols<<' ';
    //     }
    //     cout<<endl;
    // }
    for(rows=n;rows>=1;rows--){
        for(cols=rows;cols>=1;cols--){
            cout<<cols<<' ';
        }
        cout<<endl;
    }
}