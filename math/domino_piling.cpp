#include<iostream>
#include<cmath>  // for round methond.

using namespace std;

int main(void){
    int m,n;
    cin >> m >> n;
    // Divide total area by area of one tile and round off to the lower Integer.
    cout << round(m*n/2); 
}