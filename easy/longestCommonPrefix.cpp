// class Solution {
// public:
//     struct Tree {
//         std::string str;
//         int val = 0;
//         std::vector<Tree*> children;
        
//         Tree(const std::string& a, int al) : str(a), val(al) {}
//         void addStr(const std::string& a){
//             str = a;
//         }
//         void addVal(int al){
//             val = al;
//         }
//         int getLen(){
//             return str.size();
//         }
//         void addChild(Tree* child) {
//             children.push_back(child);
//         }
//     };

//     Tree* createBranch(const std::string& a, int al) {
//         Tree* node = new Tree(a, al);
//         return node;
//     }

//     void recPrefix(Tree* root, const string& str ) {
//         string result;
//         for (int i = 0; i < root->children.size(); i++) {
//                 for (int j = 0 ; j < root->children[i]->str.size() ; j++) {
//                     if (str[j] == root->children[i]->str[j] && j != root->children[i]->str.size()-1) {
//                         result += str[j];
//                     } else {
//                         if (str[j] == root->children[i]->str[j] && j == root->children[i]->str.size()-1) {
//                         result += str[j];
//                             }
//                         if (result.size() == 0) break;
//                             Tree* node = createBranch(result, 0);
//                             root->children[i]->children.push_back(node);
//                         break;
//                     }
//                 }
//             }
//         Tree* newNode = createBranch(str, 0);
//         root->addChild(newNode);
//     }

//     std::string longestCommonPrefix(std::vector<std::string>& strs) {
//         Tree* root = new Tree("root", 0);
//         for (int i = 0; i < strs.size(); i++) {
//             recPrefix(root, strs[i]);
//         }
//         string result;
//         int count[] = {0,0};
//         for(int i = 0;i < root->children.size(); i++){
//             if(root->children[i]->children.size()> count[0]){
//                 count[0]= root->children[i]->children.size();
//                 count[1]= i;
//             }
//         }
//         if(root->children.size() > 0 &&root->children[0]->children.size()>0)
//         // cout<< root->children.size()<<;
//         if(root->children.size() > 0 &&root->children[0]->children.size()>0){
//             int len = root->children[0]->children.size()-1;
//             return root->children[0]->children[len]->str;
//         }
//         return strs.size() == 1?strs[0]:"";
//     }
// };

class Solution {
public:
    string recursion(vector<string>& strs, string s,string result,  int idx){
        if(idx == strs.size() -1){
        for(int i = 0 ; i < s.size(); i++){
            if(strs[idx][i] == s[i]){
                result+= strs[idx][i];
            }else{
                return result;
                }
            }
            return result;

        }
        for(int i = 0 ; i < s.size(); i++){
            if(strs[idx][i] == s[i]){
                result+= strs[idx][i];
            }else{
                break;
            }
        }

        return recursion(strs,result,"", idx + 1);

    }
    string longestCommonPrefix(vector<string>& strs){
        if(strs.size()>0){
        return recursion(strs,strs[0],"", 0);
        }else return "";

    }
};
