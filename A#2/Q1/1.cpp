#include <iostream>
#include <string>

using namespace std;

int main(){
    int N_cards;
    cin >> N_cards;
    
    string cards;
    getline(cin, cards);
    int len = cards.length();
    string update_cards =" ";
    int temp[20] = {0};

    int count =0;

    for (int i = 0; i< len; i++){
        if (cards[i] <=57 && cards[i] >=48){
            if (cards[i+1] <=57 && cards[i+1] >=48){
                //cout << cards[i] << cards[i+1] << " ";
                temp[count] = cards[i]+cards[i+1];
                i++;
                count++;


                continue;
            }
            //cout << cards[i] << " ";
            temp[count] = cards[i];
            count++;

            
        }
    }
    //cout << "number: " << N_cards << endl;
    //for (auto itr = v1.begin(); itr != v1.end(); ++itr){
        //cout << *itr << endl;
    //}

    //for (int i=0; i<20; i++){
        //cout << temp[i] << "  ";
    //}

    //cout << endl;
    count=0;

    for (int i=0; i<20; i++){
        if (temp[i] == 0){
            //cout << "  skip  ";
            continue;
        }
        int test = temp[i];
        //cout << "testing: " << test;;
        for (int ii=i+1; ii<20; ii++){
            //cout << " with " << temp[ii] << " ";
            if (test==temp[ii]){
                count++;
                //cout << " detected " << endl;
                temp[ii]=0;
                temp[i]=0;
                break;
            }
        }
    }

    //for (int i=0; i<20; i++){
    //    cout << temp[i] << "  ";
    //}

    cout << count << endl;
    

    
    return 0;
}