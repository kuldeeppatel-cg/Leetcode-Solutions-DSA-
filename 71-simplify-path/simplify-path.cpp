class Solution {
public:
    string
    simplifyPath(string path) { // path = ""/home/user/Documents/../Pictures""
        vector<string> st;
        string curr = ""; // curr = ""        st = {"home","user","Pictures"}

        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') { // path[i] = /
                if (curr == "..") {
                    if (!st.empty())
                        st.pop_back();
                } else if (!curr.empty() && curr != ".") {
                    st.push_back(curr);
                }
                curr = "";
            } else {
                curr += path[i];
            }
        }

        string ans = "";
        for (string dir : st) { //  ans = "/home/user/Pictures"
            ans += "/" + dir;
        }

        return ans.empty() ? "/" : ans;
    }
};