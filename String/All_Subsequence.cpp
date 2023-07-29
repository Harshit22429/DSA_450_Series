#include <iostream>
#include <vector>
using namespace std;

void printAllSubsequence(string str, int index, string output, vector<string> &ansV){

    //base case 
    if(index>=str.length()){
        if(output.length()>0){
            ansV.push_back(output);
        }
        return;
    }
    // exclude part
    printAllSubsequence(str, index+1, output, ansV);

    // include part
    output.push_back(str[index]);
    printAllSubsequence(str, index+1, output, ansV);

}

int main(){
    string str="abc";
    vector<string> ansV;
    string output;
    int index =0;
    printAllSubsequence(str,index,output, ansV );
    cout<<"ansV size "<<ansV.size()<<endl;
    for(int i=0; i<ansV.size(); i++){
        cout<<ansV[i]<<" ";
    }cout<<endl;
}