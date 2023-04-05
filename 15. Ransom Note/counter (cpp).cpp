class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int counter1[26] = {0}, counter2[26] = {0};

        for(int i = 0; i<ransomNote.size(); i++)
        {
            // cout<<(ransomNote[i] - '0' - 49)<<endl;
            counter1[(ransomNote[i] - '0' - 49)] +=1;
        }
        for(int i = 0; i<magazine.size(); i++)
        {
            counter2[(magazine[i] - '0' - 49)] ++;
        }
        for(int i = 0; i<26; i++)
        {
            if (counter1[i] > counter2[i])
                return false;
        }
        return true;
    }
};