#include <iostream>
#include <string>
using namespace std;


int main(){

    string str="abc";
    for (int i =0; i<str.length(); i++){
        int start =i;
        int end = str.length()-1;
        // cout<<str[i]<<endl;
        while(start<end){
            if(str[start]==str[end]){
                start++;
                end--;
            }
            else{
                break;
            }
        }
        if(start>=end){
            if(i==str.length()-1){
                cout<<"if complete last "<<"0"<<endl;
            }
            else{

            cout<<"if complete "<<i<<endl;
            }
        break;
        }
    }
}
