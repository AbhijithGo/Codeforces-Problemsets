#include<iostream>
#include<algorithm>
using namespace std;

string a, b;

int main(void){
    cin >> a >> b;
    // Convert Uppercase to lowercase
    for(int i =0; i<a.length() ; i++){
        if(a[i] < 92){
            a[i] = a[i]+ 32;
        }
        
        if(b[i] < 92){
            b[i] = b[i]+ 32;
        }
    }

    // Directly Compare and print out values.
    if(a < b){
        cout << -1;
    }else if ( a > b){
        cout << 1;
    } else if (a == b){
        cout << 0;
    }
        return 0;
}