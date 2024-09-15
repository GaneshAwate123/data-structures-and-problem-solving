#include <bits/stdc++.h>
using namespace std;

bool anagram(string a, string b)
{
    if (a.length() != b.length())
    {
        // cout << "This string can be anagram";
        return false;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string a = "abcz";
    string b = "dcab";

    if (anagram(a, b))
    {
        cout << "The string is anagram" << endl;
    }
    else
    {
        cout << "The string is not anagram" << endl;
    }

    return 0;
}