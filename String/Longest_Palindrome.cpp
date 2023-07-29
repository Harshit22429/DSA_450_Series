#include <iostream>
using namespace std;

string longestPalindrome(string str){
    string ans;
    // int start =0;
    int end = 0;
    // int low, high;
    for(int i =1; i<str.length(); i++){

        // for odd
        int low =i;
        int high= i;
        while(low>=0 && high<str.length() && str[low]==str[high]){
            if(end<high-low+1){
                ans = str.substr(low, high-low+1);
                end = high-low+1;
            }
            low--; 
            high++;
        }

        /// for even 
        low= i-1;
        high=i;
        while(low>=0 && high<str.length() && str[low]==str[high]){
            if(end<high-low+1){
                ans = str.substr(low, high-low+1);
                end = high-low+1;
            }
            low--;
            high++;
        }

    }
    return ans;

}
int main(){

    string str ="aaaabbaa";

    cout<<"longest palindrome in this string is : "<<longestPalindrome(str);
}