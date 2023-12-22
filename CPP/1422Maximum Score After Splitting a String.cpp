class Solution {
public:
    int maxScore(string s) {
        int ans =0, Nans =0;

        for(int i =0; i< s.length()-1; i++)
        {
            for(int left =i; left>=0; left--)
            {
                if(s[left] == '0')
                {
                    Nans++;
                }
            }
            for (int right =i+1; right <s.length(); right++)
            {
                if(s[right] == '1') Nans++;
            }

            ans = max(Nans,ans);
            Nans = 0;
        }
        return ans;
    }
};
