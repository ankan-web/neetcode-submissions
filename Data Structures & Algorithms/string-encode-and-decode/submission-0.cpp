class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string encoded_string = "";
        for(int i = 0 ; i < n ; i++){
            int cnt = strs[i].size();
            encoded_string += to_string(cnt) + "#" + strs[i];
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string;
        int i = 0;
        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }

            int len = stoi(s.substr(i,j-i));

            string word = s.substr(j+1,len);

            decoded_string.push_back(word);

            i = j+1+len;

        }

        return decoded_string;
    }
};
