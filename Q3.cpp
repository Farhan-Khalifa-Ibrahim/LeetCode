#include <bits/stdc++.h>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
		if(s.size()==1) return 1;
		int res=0;
		int start=0;
		unordered_map<char,int> m;
		for(int i=0;i<s.size();i++){
			if(m.count(s[i]) && m[s[i]]>=start){
				start=m[s[i]]+1;
			}
			m[s[i]]=i;

			res=max(res,i-start+1);
		}
		return res;
    }
};