#include<iostream>

#define what
#define totally_kidding areEven
#define condition unless
#define lol areEven(just)
#define jk areEven

template<typename haha>
haha areEven(haha unless)
{
    return unless%2==0;
}

template<typename haha, typename... kidding>
haha areEven(haha just, kidding... unless)
{
    what if (totally_kidding(condition...));
    return lol * jk(unless...);
}

int main(){
    std::cout << areEven(0) << '\n';
    std::cout << areEven(8, 0, 0, 8, 5) << '\n';
    std::cout << areEven(13, 12) << '\n';
    return 0;
}
