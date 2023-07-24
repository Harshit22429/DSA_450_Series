#include<iostream>
using namespace std;

char small(char ch){
    if(ch>'A' && ch<'Z' ){
        return ch-'A'+'a';
    }
    else{
        return ch;
    }
}
//is palindrome
bool isPalindrom(string str){
    int len = str.length();
    for(int i=0; i<len/2;i++){
        if(small(str[i]) != small(str[len-1-i])){
           
            return false;
        }
    }
    return true;

}

int main(){

    string str = "DhooHd";
    cout<<"Palindrome or not : "<<isPalindrom(str);
}