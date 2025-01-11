// 1717. Maximum Score From Removing Substrings
class Solution {
public:
    int maximumGain(string s, int x, int y) {
            int points = 0;
    std::stack<char> stack1, stack2;

    // Helper function to process the stack for specific substring
    auto processStack = [&](std::stack<char>& stack, char first, char second, int value) {
        std::string temp;
        while (!stack.empty()) {
            temp += stack.top();
            stack.pop();
        }
        std::reverse(temp.begin(), temp.end());

        for (char c : temp) {
            if (!stack2.empty() && stack2.top() == first && c == second) {
                stack2.pop();
                points += value;
            } else {
                stack2.push(c);
            }
        }
        while (!stack2.empty()) {
            stack.push(stack2.top());
            stack2.pop();
        }
    };

    if (x > y) {
        // Process "ab" first
        for (char c : s) {
            if (!stack1.empty() && stack1.top() == 'a' && c == 'b') {
                stack1.pop();
                points += x;
            } else {
                stack1.push(c);
            }
        }
        // Now process "ba" in the remaining string
        processStack(stack1, 'b', 'a', y);
    } else {
        // Process "ba" first
        for (char c : s) {
            if (!stack1.empty() && stack1.top() == 'b' && c == 'a') {
                stack1.pop();
                points += y;
            } else {
                stack1.push(c);
            }
        }
        // Now process "ab" in the remaining string
        processStack(stack1, 'a', 'b', x);
    }

    return points;

    }
};
