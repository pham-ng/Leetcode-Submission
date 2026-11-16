
class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        long long result = 0;
        int i = 0;

        // 1. Bỏ khoảng trắng
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        // 2. Xác định dấu
        if (i < s.size() && s[i] == '-') {
            sign = -1;
            i++;
        } else if (i < s.size() && s[i] == '+') {
            i++;
        }

        // 3. Đọc từng chữ số
        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            result = result * 10 + digit;

            // 4. Kiểm tra tràn số
            if (sign == 1 && result > 2147483647LL) {
                return 2147483647;
            }
            if (sign == -1 && result > 2147483648LL) {
                return -2147483648;
            }

            i++;
        }

        return static_cast<int>(result * sign);
    }
};
