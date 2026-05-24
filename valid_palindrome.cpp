#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str){
    int left=0 , right=str.length()-1;

    while(left<right){
        while(left<right && !isalnum(str[left])){
            left++;
        }
        while(left < right && !isalnum(str[right])){
            right--;
        }
        if(tolower(str[left])!=tolower(str[right])){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    if(isPalindrome(str)){
        cout<<"Valid Palindrome";
    }else{
        cout<<"Not a Palindrome";
    }
   return 0; 

}