#include <iostream>
#include <algorithm>
using namespace std;

// this function to converting upper case into lower case
void changeInSmall(string &str){
    int size= str.length();
    for(int i=0; i<size; i++){
        char ch = str[i];
        if(ch>='A' && ch<='Z'){
            str[i]= ch-'A'+'a';            
        }
        else{
            str[i]=ch;
        }
    }
}
// sort string then find count and check duplicate present or not. T.C.= O(nlogn)
void printAllDuplicate(string str){
    // cout<<str<<endl;
    changeInSmall(str);
    // cout<<str<<endl;
    sort(str.begin(),str.end());
    // cout<<str<<endl;
    for(int i=0; i<str.length(); i++){
        int count=1;
        char ch = str[i];
        while(i<str.length()-1 && str[i]==str[i+1]){
            count++;
            i++;
        }
        // cout<<count<<endl;
        if(count>1 && ch!=' '){
            cout<< str[i]<<", count "<<count<<endl;
        }
    }
}
int main(){
    string str = "Harshit SinGh";
    printAllDuplicate(str);
}