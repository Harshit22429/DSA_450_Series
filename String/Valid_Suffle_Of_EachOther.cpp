#include <iostream>
#include <map>
using namespace std;


bool isValidSuffle(map<char,int> freq, string str ){
    for(int i=0; i<str.length(); i++){

        if((freq[str[i]]<1)|| !(freq[str[i]])){
            return false;
        }else{
            freq[str[i]]--;
        }
    }
    return true;
}
int main(){
    // Check if Strings are Valid Suffle of each other or not
    string str1 ="ABD4";
    string str2 = "SAD4";
    string str= "SA4AdB";
    map<char, int> freq;
    
    for(int i=0; i<str1.length(); i++){
        freq.insert({str1[i], 0});
        freq[str1[i]]++;
    }
    for(int i=0; i<str2.length(); i++){
        freq.insert({str2[i], 0});
        freq[str2[i]]++;
    }

    if(isValidSuffle(freq,str)){
        cout<<"Str is a valid suffle of str1 and str2."<<endl;
    }else{
        cout<<"Str is not a valid suffle of str1 and str2"<<endl;
    }
    for(auto x: freq){
        cout<<x.first<<" "<<x.second<<endl;
    }

}