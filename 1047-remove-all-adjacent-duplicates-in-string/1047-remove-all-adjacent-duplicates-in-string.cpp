class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string res ; 
        for(int i = 0 ; i < s.size() ; i++){
            //if stack is empty to saare eelemts ko push karo
            if(st.size() == 0){
                st.push(s[i]);
                continue;
            }
            //agar ans ka aur stack ka elemets same ho to pop kar do

            if(st.top() == s[i]){
                st.pop();
                continue;
            }
            st.push(s[i]);//bach element ko push kar do
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin() , res.end());
        return res;
    }
};