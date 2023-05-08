#include <iostream>
using namespace std;


struct Product{
    string name;
    int price;
};

struct Student{
    string name;
    int age;
    int score;
};

void search(Product * ProductLit, string searchName){
    for(int i = 0; i < 4; i++){
        if(ProductList[i].name == searchName){
            cout << ProductList[i].name << " " << ProductList[i].price << endl;
        }
    }
}


int main(){
    Product *ProductList;
    ProductList = new Product[4];

    Student *S = new (nothrow) Student[100000];

    int size = 4;
    Product *temp;
    temp = new Product[size];
    for (int=0; i<size; i++){
        temp[i] = ProductList[i];
    }
    delete [] ProductList;

    ProductList = new Product[size+1];
    for (int=0; i<size; i++){
        ProductList[i] = temp[i];
    }
    delete [] temp;

    ProductList[size].name = "Pencil";
    ProductList[size].price = 100;
    size++;


    return 0;
}