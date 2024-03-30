// Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x;

    cin>>x;
    int power=0;
    int ans=0;
    while(x>0){
        ans=ans+((!(x%2))*pow(2,power));
        // cout<<ans<<"\n";
        x=x/2;
        power++;
    }
    cout<<ans<<"\n";

    return 0;
}