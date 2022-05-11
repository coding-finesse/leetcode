class Solution {
public:
    
    bool backspaceCompare(string s, string t) {
        int size1 = s.size() , size2 = t.size();
        stack<char> s1,t1;
        for(char c:s){
            if(c != '#') s1.push(c);
            else{
                if(!s1.empty()) s1.pop();
            }
        }
        for(char c:t){
            if(c != '#') t1.push(c);
            else{
                if(!t1.empty()) t1.pop();
            }
        }
        while(!s1.empty() && !t1.empty()){
            char c1 = s1.top();
            s1.pop();
            
            char c2 = t1.top();
            t1.pop();
            if(c1 != c2) return false;
        }
        if(!s1.empty() || !t1.empty()) return false;
        return true;
    }
};