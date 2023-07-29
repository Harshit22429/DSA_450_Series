#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void allUniquePermutation(string str, int index, vector<string> &ans){
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=index; i<str.length();i++){
        if(str[index] != str[i] || i==index ){
            //processing 
            swap(str[index], str[i]);

            // recursion call
            allUniquePermutation(str,index+1, ans);

            //backtraking
            swap(str[index],str[i]);
        }
    }
}

int main(){

    string str = "ABBA";
    vector<string> ans;
    cout<<"All unique permutation of given string "<<endl;
    allUniquePermutation(str,0,ans);
    sort(ans.begin(), ans.end());

    vector<string>ans2;
    for(int i=0; i<ans.size(); i++){
        string temp = ans[i];
        while(temp==ans[i+1]){
            i++;
        }
        ans2.push_back(temp);
    }

    for(int i=0; i<ans2.size(); i++){
        cout<<ans2[i]<<" ";
    }cout<<endl;

}