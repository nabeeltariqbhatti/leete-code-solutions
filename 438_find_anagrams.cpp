class Solution {
public:
   vector<int> findAnagrams(string s, string p) {
    vector<int> res, s_map(26,0), p_map(26,0);
    int s_len = s.size();
    int p_len = p.size();
    if (s_len < p_len) return res;
    for (int i = 0; i < p_len; i++) {
        ++s_map[s[i] - 'a'];
        ++p_map[p[i] - 'a'];
    }
    if (s_map == p_map)
        res.push_back(0);
    for (int i = p_len; i < s_len; i++) {
        ++s_map[s[i] - 'a'];
        --s_map[s[i - p_len] - 'a'];
        if (s_map == p_map)
            res.push_back(i - p_len + 1);
    }
    return res;
}
};
