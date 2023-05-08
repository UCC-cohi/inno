#include <iostream>
#include <string>
#include <vector> //header file for vector
#incldue <list> //header file for list
using namespace std;

class Record {
    public:
        string name;
        string major;
        int number;
};

int vec(){
    vector<string> names; //create an empty vector of string
    vector<int> numbers;

    string command, name; int number;
    while (cin >> command >> name) {
        if (command == "Quit") {
            cout << "Quitting" << endl;
            break;
        }
        if (command == "Add") {
            cin >> number;
            names.push_back(name); //add string to the end
            numbers.push_back(number); 
            cout << name << " added" << endl;
        }
        else {
            cout << "searching " << name << endl;
            //command == "Search"
            for (int i = 0; i < names.size(); i++) {
                if (names[i] == name) {
                    cout << numbers[i] << endl;
                
                }
            }
        }
    }
    cout << "end of vec" << endl;
    return 0;
}

int bk(){
    vector<Record> book;
    string command; Record r;
    while (cin >> command >> r.name) {
        if (command == "Quit") {
            cout << "Quitting" << endl;
            break;
        }
        if (command == "Add") {
            cin >> r.number;
            book.push_back(r); //add string to the end
            cout << r.name << " added" << endl;
        }
        else {
            cout << "searching " << r.name << endl;
            //command == "Search"
            for (int i = 0; i < book.size(); i++) {
                if (book[i].name == r.name) {
                    cout << book[i].number << endl;
                
                }
            }
        }
    }
    cout <<"end of bk" << endl;
    return 0;
}


int main(){
    list<Record> book;
    string command; Record r;
    while (cin >> command ) {
        if (command == "Quit") {
            cout << "Bye" << endl;
            break;
        }
        else if (command == "Add") {
            cin >> r.name >> r.major>> r.number;
            book.push_back(r);
            cout << "Added Successfully" << endl;
        }
        else if (command == "Search"){
            cin >> r.name >> r.major;
            int count=0;
            for (int i =0; i< book.size(); i++){
                if (book.front().name == r.name && book.front().major == r.major){
                    cout << "Student Number:" << book.front().number << endl;
                    count=1;
                    break;
                } else {
                    book.push_back(book.front());
                    book.pop_front();
                }
            }
            if (count ==0){
                cout << "No Record found" << endl;
            }
        }
    }
    return 0;
}
    
