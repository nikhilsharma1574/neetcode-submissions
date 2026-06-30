class Solution {
public:

    string encode(vector<string>& strs) {
        string answer="";
        for(int i=0;i<strs.size();i++)
        {
            answer+=strs[i];
            if(i!=strs.size()) answer+="-";
        }
        return answer;
    }

    vector<string> decode(string s) {
        vector<string> v;
        string token;
        stringstream ss(s);
        while(getline(ss,token,'-'))
        {
            v.push_back(token);
        }
        return v;
    }
};
