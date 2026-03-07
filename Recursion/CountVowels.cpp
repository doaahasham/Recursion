#include <iostream>
using namespace std;

int CountVowels(string S, int i){

    if(i == S.length())
        return 0;

    char c = tolower(S[i]);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1 + CountVowels(S, i+1);
    else
        return CountVowels(S, i+1);
}

int main()
{
    string S;
    getline(cin, S);

    cout << CountVowels(S,0);

    return 0;
}
