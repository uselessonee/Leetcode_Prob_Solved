class Solution
{
public:
    int a;
    string reverseWords(string s)
    {
        string reversed;
        string temp;
        int size = s.size() - 1;
        for (int i = 0; i <= size; i++)
        {
            if (s[i] == ' ')
            {
                reverse(temp.begin(), temp.end());
                reversed += temp + ' ';
                temp.clear();
            }
            else
            {
                temp += s[i];
                if (i == size)
                {
                    reverse(temp.begin(), temp.end());
                    reversed += temp;
                }
            }
        }
        return reversed;
    }
};