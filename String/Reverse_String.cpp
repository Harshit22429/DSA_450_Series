#include <iostream>
using namespace std;



int main(){
    string str= "Harshit";

    //return string

    int len = str.length();
    for (int i =0; i<len/2; i++){
        swap(str[i], str[len - i - 1]);
    }

    cout<<"after reversing string : "<<str<<endl;




    return 0;
}