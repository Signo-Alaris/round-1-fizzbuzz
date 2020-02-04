#include <iostream>

int main()
{
    for(int i = 1; i <= 100; ++i)
    {
        std::string msg = "";
        msg.append((i % 3 == 0) ? "Fizz" : "");
        msg.append((i % 5 == 0) ? "Buzz" : "");
        msg.empty() ? printf("%i\n", i) : printf("%s\n", msg.c_str());
    }
}