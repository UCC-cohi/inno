#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Product{
    string name;
    double price;
    Product *next;
};


Product*headinsert (Product *h, string n, double p){
    Product *pNode = new Product;
    pNode -> name =n;
    pNode -> price =p;
    pNode -> next= h;
    h = pNode;
    return h; //pointer variable is pass by value
}

void searchList (Product *head, string n){
    Product *current;
    current = head;
    while (current != NULL){
        if (current -> name == n){
            cout << current -> price << endl;
        }
        current = current -> next;
    }
}


int main(){
    Product *current, *previous;
    previous = NULL;
    Product *head = NULL;
    current = head;

    while (current != NULL){
        if (current-> name == "chicken"){
            previous -> next = current -> next;
            delete current;
            break;
        }
        
        previous = current;
        current = current -> next;
    }

    return 0;
}