class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;

        for (string op : operations) {
            if (op == "+")
                score.push_back(score.back() + score[score.size() - 2]);
            else if (op == "D")
                score.push_back(2 * score.back());
            else if (op == "C")
                score.pop_back();
            else
                score.push_back(stoi(op));
        }

        int sum = 0;
        for (int x : score)
            sum += x;

        return sum;
    }
};