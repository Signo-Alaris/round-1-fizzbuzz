#include <iostream>
#include <string>

using namespace std;

string fizzbuzz(int in){
    string result = "";
    if(in%3==0)
        result += "Fizz";
    if(in%5==0)
        result += "Buzz";
    return result;
}

int main()
{
    for(int i = 1; i < 100; i++){
        string current = fizzbuzz(i);
        if(current != "")
            cout<<fizzbuzz(i)+"\n";    
    }
    
    return 0;
}