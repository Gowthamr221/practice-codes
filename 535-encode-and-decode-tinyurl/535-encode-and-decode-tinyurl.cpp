class Solution {
public:
    int count = 0;
    map<string,string> database;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string res = "http://tinyurl.com/" + to_string(count);
        count++;
        database[res]=longUrl;
        return res;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return database[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));