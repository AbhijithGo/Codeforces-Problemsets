#include<iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int sum = 0;
    
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        
        // Use a basic for loop to increment or decrement counter.
        if(s[0] == '+')
            sum++;
        if(s[0] == '-')
            sum--;
        if(s[2] == '+')
            sum++;
        if(s[2] == '-')
            sum--;       
    }
    cout << sum << endl;
    return 0;
}