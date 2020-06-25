class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char aux;
        for(int i = 0;i < s.length(); i++){

            //Insert All the opening Brackets
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                continue;
            }

            //If there is no opening braces in the beginning then return false;
            if(st.empty()){
                return false;
            }

            //Match all the brackets and return false if anyone does not match
            switch (s[i]){
                case ')' :  aux = st.top();
                            st.pop();
                            if(aux == '{' || aux == '[' ){
                                return false;
                            }
                            break;
                case '}' :  aux = st.top();
                            st.pop();
                            if(aux == '(' || aux == '[' ){
                                return false;
                            }
                            break;
                case ']' :  aux = st.top();
                            st.pop();
                            if(aux == '{' || aux == '(' ){
                                return false;
                            }
                            break;
            }
        }
        //Return 1 If stack is empty i.e All the brackets are matched
        int i = st.empty();
        return i;
    }
};
