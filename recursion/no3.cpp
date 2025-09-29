#include <iostream>
#include <vector>
/*Remove a character in the array.
 Hint: if abacada is provided, by removing a the program print bcd
 */
std::string clean;

/*This implementation works by storing the part of the string we want in a global variable called clean*/
void removeChar(char word[] , char let){
    if(word[0]=='\0') {
        std::cout<<clean<<" ";
        clean.clear();
        return;
    };
    if(word[0] == let) {
        removeChar(word+1,let);
    }else{
        clean.push_back(word[0]);
        removeChar(word+1,let);
    }

}

void removeChar2(char word[],char let) {
    if(word[0] == '\0') return;
    if(word[0]!= let) std::cout<<word[0]; 
    removeChar2(word+1,let);
}

/*Now instead of removing the character replace it with another character*/

void replaceChar(char word[] , char let , char repl) {
    if (word[0]=='\0') return;
    if(word[0] == let) {
        word[0] = repl;
        replaceChar( word + 1,let,repl);
    }else{
        replaceChar(word+1,let,repl);
    }
}

int length(char word[]) {
    if(word[0]=='\0') return 0;
    else 
      return 1 + length(word+1);
}

int main() {
    char word[] = "abacada";
    removeChar(word,'a');
    removeChar2(word,'a');
    replaceChar(word,'a','x');
    std::cout<<"\n";
    std::cout<<word<<" ";
    std::cout<<"The size of the word is: "<<length(word)<<"\n";
    return 0;
}

