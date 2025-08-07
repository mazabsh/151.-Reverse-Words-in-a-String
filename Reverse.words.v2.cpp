#include<iostream> 
#include<vector> 
#include<algorithm> 

using namespace std; 

class Solution{
public: 
   string reverseWords(string s){
     string ans; 
     vector<string> words; 
     string word; 
     for(int i=0; i<s.size(); ++i){
       if(s[i]!=' '){
         word +=s[i]; 
       }else if(!word.empty()){ 
         words.push_back(word);
         word.clear(); 
       } 
     }
     if(!word.empty()) words.push_back(word); 
     reverse(words.begin(), words.end()); 
     for(int i=0; i< words.size(); ++i){
       ans +=words[i]; 
       if(i!=words.size()-1) ans +=" "; 
     }
     return ans; 
   }
};
int main(){
  string s = " the sky is blue "; 
  Solution sol; 
  cout << sol.reverseWords(s) <<endl; 
  return 0; 
}
