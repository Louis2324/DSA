#include <iostream>
void removeConsecutive(char str[] ,int index =0) {
   if(str[index] == '\0') return;
   std::cout<<str[index];
   int next = index +1;
   while(str[index] == str[next] ) next ++;
   removeConsecutive(str,next);
}

int main() {
    char s1[] = "aabbbccdd";
    char s2[] = "abcde";
    removeConsecutive(s1);
    std::cout<<std::endl;
    removeConsecutive(s2);
    std::cout<<std::endl;
    return 0;
}

