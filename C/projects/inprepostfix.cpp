#include <iostream>
#include <stack>
#include <queue>

using namespace std;

string in_to_post(string input){
    string result;
    stack<char> a;

    for(int i = 0; i < input.length(); i++){
        if(a[i] != ' '){
            if(a[i] >= '0' && a[i] <= '9'){
                result += a[i] + " ";
            }else{
                if(a[i] == '+' || a[i] == '-'){
                    
                }
            }
        }
    }
    return result;
}

string convert(string input, int mode1, int mode2){
    switch (mode1)
    {
    case 0:
        
        break;
    case 1:
        break;
    
    case 2:
        break;
    default:
        break;
    }
}

int main(){
//prefix = 0, infix = 1, postfix = 2

    return 0;
}