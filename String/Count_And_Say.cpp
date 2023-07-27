#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n){
    string str="";

    //Base case
    if(n==1){
        str="1";
        return str;
    }
    // cout<<"Before recursion call "<<endl;
    //recursion call
    str=countAndSay(n-1);
    // cout<<"after recursion call back : "<<str<<endl;
    cout<<"backed string is: "<<str<<endl;

    //processing


    // int count =1;
    // string newStr="";
    // for (int i = 0; i < str.size(); i++) {
    //         if (i < str.size() && str[i] == str[i + 1]) {
    //             count++;
    //             // cout<<"count incremented at "<<i<<"th"<<endl;
    //         } else {
    //             newStr +=to_string(count);
    //             newStr+=str[i]; 
    //             count = 1;
    //         }
            
    // }
    // return newStr;




    int cnt = 1;
    string ans = "";
    for (int i = 0; i < str.size(); i++) {
        if (i < str.size() && str[i] == str[i + 1]) {
            cnt++;
        } else {
            ans += char(cnt + int('0'));
            ans += str[i]; 
            cnt = 1;
        }
    }
    return ans;


}

int main(){
    int n=5;
    cout<<"Answer for given number is : "<<countAndSay(n)<<endl;
}