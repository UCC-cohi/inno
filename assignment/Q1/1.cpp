#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
// You can add more libraries here (if needed)
using namespace std;
// Define the classes and member functions here

struct Student {
	int id;
	string name;
	Student() {
		id = 0;
		name = "invalid";
	};
	Student(int inputid, string inputname) {
		id = inputid;
		name = inputname;
	};
};

class Table {
public:	
	void InsertStudent(Student x, int y);
	void SearchbyID(int x);
	void SearchbyGrade(int y);
	void Statistics();
	void PrintAll();
	Table ();
	// You can add more member functions to help your implementation.
//private:
	/* The data type is decided by you records; */ 
	int ID;
	string Name;
	int mark;
	int grade[101];
	int count;
	vector<Table> s;
	Table (int inputID, string inputName, int inputmark);
	
};

bool operator<(const Table&a, const Table&b) {
	// This function may be useful for your implementation.
	if (a.ID < b.ID) {
		return true;
	}
	else {
		return false;
	}
}

//insert one record in to the stored records
void Table::InsertStudent(Student x, int y) {
	// To be implemented
	Table w = {x.id, x.name, y};
	grade[count] = y;

	for (int i = 0; i < count; i++) {
		if (s[i].ID == x.id) {
			cout << "Student exists." << endl;
			return;
		}
	}


	s.push_back(w);
	
	cout << "Insert success!" << endl;
	//cout << "The number of students in the table is: " << count+1 << endl;
	//cout << "The student's ID is: " << w.ID << endl;
	//cout << "The student's name is: " << w.Name << endl;
	//cout << "The student's grade is: " << grade[count] << endl;
	//cout << endl;

	
	count++;
}

//return the name and grade of the student with id x
void Table::SearchbyID(int x) {
	// To be implemented
	for (int i = 0; i < count; i++) {
		if (s[i].ID == x) {
			cout << s[i].Name << endl << s[i].mark << endl;
			return;
		}
	}
	cout << "No such student" << endl;
	cout << endl;

}

//return the id and name of the student with grade y
void Table::SearchbyGrade(int y) {
	// To be implemented
	bool flag = false;
	for (int i = 0; i < count; i++) {
		if (s[i].mark == y) {
			cout << s[i].ID << " " << s[i].Name << endl;
			flag = true;
		}
	}
	if (flag == false){
		cout << "No such record." << endl;
		cout << endl;
		return;
	}
}

//Print the maximum, minimum, and median of grades
void Table::Statistics() {
	// To be implemented
	sort(grade, grade + count);
	//cout << "count " << count << endl;
	cout << "Maximum " << grade[0] << endl;
	if (count % 2 == 0) {
		cout.precision(1);
		double ans= (grade[count / 2] + grade[count / 2 - 1]) / 2;
		//cout << "even count" << endl;
		//cout << "Median " << fixed << ans << endl;
		double a= grade[count/2];
		double b= grade[count/2-1];
		cout << "Median " << fixed << (a+b)/2 << endl;
	}
	else{
		//cout << "odd count" << endl;
		cout << "Median " << grade[count / 2] << endl;
	}
	cout << "Minimum " << grade[count - 1] << endl;
	
	cout << endl;
}

//Print all records in the ascending order of id
void Table::PrintAll() {
	// To be implemented
	sort(s.begin(), s.end());
	vector<Table> :: iterator itr;
	for (itr = s.begin(); itr != s.end(); ++itr) {
		cout << itr->ID << " " << itr->Name << " " << itr->mark << endl;
	}
	cout << "-----------------";
	cout << endl;
}

Table :: Table (int inputID, string inputName, int inputmark) {
		ID = inputID;
		Name = inputName;
		mark = inputmark;
}

Table :: Table () {
	ID = 0;
	Name = "invalid";
	mark = 0;
}

int main() {
	Table t;
	string command;
	int id;
	string name;
	int grade;
	
	while (cin >> command) {
		if (command == "InsertStudent") {
			cin >> id >> name >> grade;
			Student s = {id, name};
			t.InsertStudent(s, grade);
		}
		else if (command == "SearchbyID") {
			cin >> id;
			t.SearchbyID(id);
		}
		else if (command == "SearchbyGrade") {
			cin >> grade;
			t.SearchbyGrade(grade);
		}
		else if (command == "PrintAll") {
			t.PrintAll();
		}
		else if (command == "Statistics") {
			t.Statistics();
		}
		else if (command == "exit") {
			break;
		}
	}

	return 0;
}
