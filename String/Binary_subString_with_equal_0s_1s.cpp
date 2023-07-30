#include<iostream>
using namespace std;

int binarySubStringEqual01(string str){
    int count=0;
    int zeros=0;
    int ones=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='0'){
            zeros++;
        }else{
            ones++;
        }
        if(ones==zeros){
            count++;
        }
    }
    if(count<1){
        return -1;
    }else{
        return count;
    }
}
int main(){
    /*  Split the binary string into substrings with equal number of 0s and 1s

        Input: str = “0100110101” 
        Output: 4 
        The required substrings are “01”, “0011”, “01” and “01”.
    */
   string str = "0100110101";
   cout<<"Total substring could be divide : "<<binarySubStringEqual01(str);

}