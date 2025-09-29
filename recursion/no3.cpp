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
int main() {
    char word[] = "abacada";
    removeChar(word,'a');
    removeChar2(word,'a');
    return 0;
}

