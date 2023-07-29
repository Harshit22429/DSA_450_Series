#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){

    int arr[5]={2,2,3,5,5};
    vector<int> ans;
    for (int i=0; i<5; i++){
        int temp = arr[i];
        while(temp==arr[i+1]){
            i++;
        }
        ans.push_back(temp);
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
