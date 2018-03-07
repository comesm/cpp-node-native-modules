//
//  main.cpp
//  TestCpp
//
//  Created by Michael Comes on 2/27/18.
//  Copyright © 2018 Michael Comes. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>

using namespace std;

//abannc


string longestPalindrome(string s) {

    if(s.empty()) return "";
    
    if(s.size() == 1) return s;
    
    int min_start = 0, max_len = 1;
    
    for(int i = 0; i < s.size();) {
        if(s.size() - i < max_len / 2) break;
        int j = i, k = i;
        while(k < s.size() -1  && s[k+1] == s[k]) ++k;
        i = k+1;
        while(k < s.size() - 1 && j > 0 && s[k + 1] == s[j - 1]){
            ++k; --j;
        }
        int new_len = k - j + 1;
         if(new_len > max_len) {min_start = j; max_len = new_len; }
        }
      return s.substr(min_start, max_len);
};




int main(int argc, const char * argv[]) {
    cout << longestPalindrome("cabac");
    
    //string str = "abc";
    
    
    
//    vector<int> v(256, -1);
//    
//    int i = 'a';
//    
//    cout << i << endl;
//    
//    v['a'] = 33;

    //cout << lengthOfLongestSubstring("aroaa");
    
    
    return 0;
}




