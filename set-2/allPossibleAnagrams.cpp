#include <iostream>
#include <vector>
using namespace std;

void allPossibleAnagrams(string s , int i, int n , vector<string>& anagrams)
{
    if(i == n)
    {
        anagrams.push_back(s);
        return;
    }
    
    for(int j = i ; j < n ; j++)
    {
        swap(s[j],s[i]);
        allPossibleAnagrams(s,i+1,n,anagrams);
        swap(s[j],s[i]);
    }
}


int main() {
    string s1 = "abc";
    vector<string> anagrams;
    
    allPossibleAnagrams(s1,0,s1.size(),anagrams);
    
    for(auto i : anagrams)
    {
        cout << i << endl;
    }

    return 0;
}