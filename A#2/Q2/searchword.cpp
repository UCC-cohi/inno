#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//int SearchWord(string word, string fn, int &nLines, int &total);
int SearchWord(string word, string fileName, int &nLines, int &total){
    word.insert(word.length(), " ");
    word.insert(0, " ");
    //cout << word << "  ";
    //cout << fileName << "  ";
    //cout << nLines << "  ";
    //cout << total << endl;

    
    ifstream fin;
    fin.open(fileName.c_str());


    if (fin.fail()){
        return 1;
    }

    string line;

    while (getline(fin, line)){
        int a=0;
        for (int i = 0; i < line.length(); i++) {
            line[i] = tolower(line[i]); 
        }
        line.insert(line.length(), " ");
        line.insert(0, " ");
        //cout << line << endl;
        a = line.find(word);
        if (a != -1){
            nLines++;
        }
        while (a!=-1){
            //cout << a << " ";
            total++;
            line.replace(a,1,"0");
            a = line.find(word);
        }
        //cout << endl;
        
    }

    fin.close();
    return 0;
}