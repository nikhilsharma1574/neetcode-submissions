class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> v;
        int i=0;
        st.push(asteroids[i]);
        i++;
        int n = asteroids.size();
        while(i<n)
        {
            
            if(!st.empty() && st.top() > 0 && asteroids[i] < 0)
            {
                int top=abs(st.top());
                int current=abs(asteroids[i]);
                if(top==current)
                    {
                        st.pop();
                        i++;
                    }
                else if(top>current){ i++; }
                else{
                    st.pop();
                }
            }
            else
            {
                st.push(asteroids[i]);
                i++;
            }
        }
        while(!st.empty())
            {
                v.push_back(st.top());
                st.pop();
            }
            reverse(v.begin(), v.end());
        return v;
    }
};