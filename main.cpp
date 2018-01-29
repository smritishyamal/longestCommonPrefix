//
//  main.cpp
//  longestCommonPrefix
//
//  Created by Smriti Shyamal on 2018-01-29.
//  Copyright © 2018 Smriti Shyamal. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix (vector<string>& strs){
        string prefix;
        int count = 0;
        int flag = 0;
        while (flag == 0) {
            for (vector<string>::iterator i = strs.begin(); i != strs.end()-1; ++i) {
                string::iterator itt = (*i).begin();
                string::iterator itt_next = (*(i+1)).begin();
                if (*(itt + count) != *(itt_next + count)) {
                    flag = 1;
                    break;
                }
                if (i == strs.end()-2) {
                    prefix.push_back((*(itt_next + count)));
                }
            }
            count = count + 1;
        }
        return prefix;
    }
} sol;

int main() {
    string commonprefix;
    // given array of strings
    vector<string> v = {"lea", "leat", "leatcode", "leatdune"};
    commonprefix = sol.longestCommonPrefix(v);
    cout << commonprefix << endl;
    return 0;
}
