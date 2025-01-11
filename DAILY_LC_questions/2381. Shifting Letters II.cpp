class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> netShifts(n + 1, 0);
        
        // Step 1: Update netShifts using the given shifts
        for (const auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            int delta = (direction == 1) ? 1 : -1;
            netShifts[start] += delta;
            netShifts[end + 1] -= delta;
        }
        
        // Step 2: Compute the prefix sum to get the actual shifts
        int currentShift = 0;
        for (int i = 0; i < n; ++i) {
            currentShift += netShifts[i];
            // Apply the shift and wrap around the alphabet
            int newChar = (s[i] - 'a' + currentShift) % 26;
            if (newChar < 0) newChar += 26; // Handle negative shifts
            s[i] = 'a' + newChar;
        }
        
        return s;
    }
};
