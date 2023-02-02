class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result(digits.size() + 1);
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; --i) {
            result[i + 1] = (digits[i] + carry) % 10;
            carry = (digits[i] + carry) / 10;
        }
        if (carry) result[0] = carry;
        else result.erase(result.begin());
        return result;
    }
};
