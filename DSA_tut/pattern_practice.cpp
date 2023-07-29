/* 321 pattern

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 0;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<n-j+1;
            // cout<<j;
            j= j+1;
        }
        cout<<endl;
        i = i+1;
    }
    return 0;
}*/
/* pattern
    1 2 3 
    4 5 6 
    7 8 9 
#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 1;
    cin>>n;
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count<<" ";
            count = count + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i+1;
    }
    return 0;
}*/



/*pattern
    *
    **
    ***
    ****

#include<iostream>
using namespace std;

int main(){
    int n;
    int row = 1;
    cin>>n;

    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<"*";
            col =col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}*/


/*pattern
        1 
        2 3 
        3 4 5 
        4 5 6 7

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        int k = row;
        while(col<=row){
            cout<<row+col-1<<" ";
            col = col + 1;
            k = k+1;

        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
} */


