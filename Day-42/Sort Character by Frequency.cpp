

------------------------>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<-------------------------
// T.c - O(n + k log k)
// S.c - O(n + k).

class Solution {
public:
    string frequencySort(string s) {
    // Step 1: Count the frequency of each character
    unordered_map<char, int> frequencyMap;
    for (char c : s) {
        frequencyMap[c]++;
    }

    // Step 2: Create a vector of pairs (character, frequency)
    vector<pair<char, int>> freqVec(frequencyMap.begin(), frequencyMap.end());

    // Step 3: Sort the vector by frequency, and by ASCII value if frequencies are the same
    sort(freqVec.begin(), freqVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first; // sort by ASCII value if frequencies are the same
        }
        return a.second > b.second; // sort by frequency
    });

    // Step 4: Build the result string based on sorted frequencies
    string result;
    for (const auto& pair : freqVec) {
        result += string(pair.second, pair.first);
    }

    return result;
    }
};



---------------------->>>>>>>>>>>>>>>Approach-2 <<<<<<<<<<<<<<<<<<<<<<<<<----------------------
// T.C - O(n)
// S.c - O(n+k)


class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        int maxFreq = 0;
        for(int i =0 ;i<s.length();i++){
            freq[s[i]]++;
            maxFreq = max(maxFreq,freq[s[i]]);
        }

        vector<vector<int> > bucket(maxFreq+1);
        for(const auto &pair:freq){
            bucket[pair.second].push_back(pair.first);;
        }

        string ans ="";
        for(int i = maxFreq ; i>0;--i){
            for(char c: bucket[i]){
                ans += string(i,c);
            }
        }
        return ans;
    }
};