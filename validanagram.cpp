//December 3rd, 2022

class Solution {
public:
    bool isAnagram(string s, string t) {
        //create two maps with occures
        map<char,int> mi1,mi2;
        for (int i=0; i<s.size(); i++){
            mi1[s[i]]++;
        }
        for (int i=0; i<t.size(); i++){
            mi2[t[i]]++;
        }
        map<char,int>::iterator k;
        for (k=mi1.begin(); k!=mi1.end(); k++){
            cout << k->first << " " << k->second << " " << mi2[k->first] << endl;
            if (k->second!=mi2[k->first])
                return false;
        }
        for (k=mi2.begin(); k!=mi2.end(); k++){
            cout << k->first << " " << k->second << " " << mi2[k->first] << endl;
            if (k->second!=mi1[k->first])
                return false;
        }
        cout << endl;
        return true;
    }
};
