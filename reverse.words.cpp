#include<iostream> 
#include<stack> 
#include<sstream> 

using namespace std; 

class Solution{
public: 
   string reverseWords(string s) {
     string ans; 
     stringstream ss(s); 
     stack<string> st; 
     string p; 
     while(ss>>p) st.push(p); 
     while(!st.empty()){
       ans +=st.top()+" "; 
       st.pop(); 
     }
     ans.pop_back(); 
     return ans; 
   }
};
int main(){
  string s = " the sky is blue "; 
  Solution sol; 
  cout << sol.reverseWords(s) <<endl; 
  return 0; 
}
