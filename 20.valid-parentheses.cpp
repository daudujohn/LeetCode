/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        int i = 0;
        while (i < s.length())
        {
            char start_bracket = ' ';
            if ((s[i] == '(') or s[i] == '{' or s[i] == '[')
            {
                stk.push(s[i]);
            }
            else
            {
                if (stk.empty())
                {
                    return false;
                }
                start_bracket = stk.top();
                if ((s[i] == ')' and start_bracket == '(') or (s[i] == ']' and start_bracket == '[') or (s[i] == '}' and start_bracket == '{'))
                {
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            i++;
        }
        return stk.empty();
    }
};
// @lc code=end
