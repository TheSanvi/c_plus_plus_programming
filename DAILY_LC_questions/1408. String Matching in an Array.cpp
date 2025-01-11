class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string> resultSet; // To avoid duplicates
        int n = words.size();
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j && words[j].find(words[i]) != string::npos) {
                    resultSet.insert(words[i]);
                    break; // No need to check further for this word
                }
            }
        }
        
        // Convert the set to a vector
        return vector<string>(resultSet.begin(), resultSet.end());
    }
};
