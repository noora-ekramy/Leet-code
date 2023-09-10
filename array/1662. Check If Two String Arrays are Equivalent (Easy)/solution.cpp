class Solution {
public:
    /**
     * arrayStringsAreEqual - Check If Two String Arrays are Equivalent
     * @word1: first string array
     * @word2: second string array
     * Return: True or false
     */
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int currentString1 = 0, currentString2 = 0;
        int currentChar1 = 0, currentChar2 = 0;
        while (true) {
            if (currentString1 < word1.size() &&
                currentString2 < word2.size() &&
                currentChar1 < word1[currentString1].size() &&
                currentChar2 < word2[currentString2].size()) {
                if (word1[currentString1][currentChar1] != word2[currentString2][currentChar2])
                    return false;
                currentChar1++;
                currentChar2++;
                if (currentChar1 >= word1[currentString1].size()) {
                    currentChar1 = 0;
                    currentString1++;
                }
                if (currentChar2 >= word2[currentString2].size()) {
                    currentChar2 = 0;
                    currentString2++;
                }
            } else {
                if (currentString1 < word1.size() || currentString2 < word2.size())
                    return false;
                break;
            }
        }

        return true;
    }
};
