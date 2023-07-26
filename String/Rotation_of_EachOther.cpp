#include<iostream>
using namespace std;

bool isRotation(string str, string cpy){
    for(int i=str.length()-1; i>=0; i--){
        char ch = str[str.length()-1];
        int len = str.length()-1;
        while(len>=1){
            str[len]=str[len-1];
            len--;
        }
        str[len]=ch;
        if(str==cpy){
            return true;
        }
        // cout<<str<<" and "<<cpy<<endl;
    }
    return false;
}

int main(){
    string str="ABDAC";
    string cpy= "DCAB";
    if(isRotation(str,cpy)){
        cout<<"Rotation.";
    }else{
        cout<<"No rotation.";
    }
}