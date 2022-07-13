Problem Statement:
Reverse the given string word-wise. The last word in the given string should come at 1st place, the last-second word at 2nd place, and so on. Individual words should remain as it is.
Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
Output Format :
The only line of the output prints the Word wise reversed string.
Constraints :
0 <= |S| <= 10^5
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always


#include <iostream>
#include <cstring>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    string ans;
    input =" "+input+" ";
    for(int i=input.length()-1; i>=0;i--){
        if(input[i]==' '){
            for(int j=i+1;j<input.length();j++){
                if(input[j]==' '){
                    ans +=" "; 
                    break;
                }
                ans += input[j];
            }
            
            
        }
       
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
