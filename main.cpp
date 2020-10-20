#include <bits/stdc++.h>
using namespace std;
void isPalindrome(string s){
	int low=0;
	int high=s.size()-1;
	while(high>low){
		if(s[low++]!=s[high--]){
			cout<<s<<" " << "not a palindrome"<<"\n";
			return;
		}
		
	}
	cout<<s<<" "<<"palindrome "<<"\n";
	
}

int main() {
	// your code goes here
	isPalindrome("madam");
	isPalindrome("ABBA");
	isPalindrome("hello");
	return 0;
}