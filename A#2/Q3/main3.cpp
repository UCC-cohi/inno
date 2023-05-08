#include <iostream>
#include "d2boh.h"
using namespace std;

int main(){
    int a,b;
    
    cin >> a >> b;
    if (a==2){
        int output[12]= {0,0,0,0,0,0,0,0,0,0,0,0};
        decimal_to_binary(b, output);
    }

    if (a==8){
        int output[12]= {0,0,0,0,0,0,0,0,0,0,0,0};
        decimal_to_octal(b, output);
        for (int i=11; i>=0; i--){
            if (output[i] !=0){
                a++;
            }
            if (a>8){
                cout << output[i];
            }
            
        }
    }

    if (a==16){
        char output[12]= {0,0,0,0,0,0,0,0,0,0,0,0};

        decimal_to_hexadecimal(b, output);
        for (int i=11; i>=0; i--){
            cout << output[i];

        }
    }
    
    cout << endl;
    return 0;
}
