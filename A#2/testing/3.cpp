#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int a,input;
    cin >> a >> input;
    if (a==2){
        int output[12];
        int count =0;

		while (input != 0){
			int n = input;
			int temp = n%2;
			input = n/2;
			output[count] = temp;
			count++;
			cout << temp << " ";
		}

		cout << endl;

        for (int i=0; i<12; i++){
            cout << output[i] << " ";
        }    
    }  

    if (a==8){
        int output[12];
        int count =0;

		while (input != 0){
			int n = input;
			int temp = n%8;
			input = n/8;
			output[count] = temp;
			count++;
			cout << temp << " ";
		}

		cout << endl;

        for (int i=0; i<12; i++){
            cout << output[i] << " ";
        }    
    }  

    if (a==16){
        char output[12];
        int count =0;
		char c;
		while (input != 0){
			int n = input;
			int temp = n%16;
			input = n/16;

			if (temp < 10){
				output[count] = 48 + temp;
			} else {
				output[count] = 55 + temp;
			}
			count++;
			cout << temp << " ";
		}
		
		cout << endl;

        for (int i=0; i<12; i++){
            cout << output[i] << " ";
        }    
    }  
    return 0;
}