#include <iostream>
#include <string>
#include <cmath>
int toNum(char  numStr[] , int size) {
    if(size == 1) {
      return numStr[0] - '0';
    }else {
        int num = numStr[0] - '0';
        return (num *( pow(10 ,size-1 ))) + toNum(numStr+1 , size-1);
    }
}
int main() {
    // const char nums[] = "0123456789";
    // for(int num : nums) {
    //     std::cout<<num<<" corresponds to "<<(char)num;
    //     std::cout<<"\n";
    // }
    char nums[] = "12345";
    std::cout << toNum(nums,5) << " ";
    return 0;
}

