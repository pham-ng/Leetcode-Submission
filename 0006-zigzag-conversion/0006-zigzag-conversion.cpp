#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() <= numRows) return s;

        vector<string> rowstr(numRows);
        int currentrow = 0;
        bool direction = false;

        for (char c : s) {
            rowstr[currentrow] += c;
            if (currentrow == 0) direction = true;
            if (currentrow == numRows - 1) direction = false;
            currentrow += direction ? 1 : -1;
        }

        string result;
        for (const string& row : rowstr) {
            result += row;
        }
        return result;
    }
};
