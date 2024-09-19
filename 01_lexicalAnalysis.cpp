#include <iostream>
#include <string>
#include <vector>
using namespace std;

void convertToLeximes(vector<string> &leximes, string code){
    string lexime = "";
    for(int i=0; i<code.length(); i++){
        if(code[i] != ' '){
            lexime.push_back(code[i]);
        }
        else{
            leximes.push_back(lexime);
            lexime = "";
        }
    }
    
    return;
}

void printLeximes(vector<string> &leximes){
    for(int i=0; i<leximes.size(); i++){
        cout << leximes[i] << " | ";
    }
}

int main() {
    string str;
    vector<string> leximes;
    cout << "Type the code here: ";
    getline(cin, str);
    
    convertToLeximes(leximes, str);
    printLeximes(leximes);

    return 0;
}