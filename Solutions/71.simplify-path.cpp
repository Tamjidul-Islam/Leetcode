class Solution {
public:
    string simplifyPath(string path) {
        int i=0,n=path.size();
        vector<string>stack;
      while(i<n){
        while(i<n && path[i]=='/') i++;
        string temp="";
        while(i<n && path[i]!='/'){
            temp+=path[i];
            i++;
        }
        if(temp=="." || temp=="") continue;
        else if(temp==".."){ 
             if(!stack.empty()) stack.pop_back();
        }
        else stack.push_back(temp);
      }
      string result="/"; 
      for(int i=0;i<stack.size();i++){
        result+=stack[i];
        if(i!=stack.size()-1) result+='/';
      }
      return result;
    }
};