#include <iostream>
using namespace std;

struct Book {
	int book_id,quantity, price;
	string book_title, book_author, book_year, book_publisher;
	Book* next, *prev;
};

class LinkedList{
public:
	Book* head =NULL;
	int sz = 0;
	void newBook(); // add new book
	void displayBook(); // display all book
	bool checkBookid(int x);// check whether id is used or not
	void searchBookid(int x);//search book based on id 
	void updateBook(int x);//update book info
	void deleteBook(int x);//delete a book
	void reset(); //reset linkedlist
	void sort_id(); // sort book base on id
	void sort_quantity(); //sort book base on quantity
	void printsize();// print size of list (total unique book)
	void swp(ClassInfo* x, ClassInfo* y); //swap function
};

bool LinkedList::checkBookid(int x) {
	Book* cur = head;
	while (cur != NULL) {
		if (cur->book_id == x) {
			return false;
		}
		cur = cur->next;
	}
	return true;
}

void LinkedList :: newBook(){
	Book* newnode = new Book;
	cout << "Book ID : ";
	cin >> newnode->book_id;
	bool check = checkBookid(newnode->book_id);
	while (!check) {
		cout << "Please Enter Book ID : ";
		cin >> newnode->book_id;
		check = checkBookid(newnode->book_id);
	}

	cout << "Book Name	: ";
	cin >> newnode->book_author;
	cout << "Book Title : ";
	cin >> newnode->book_title;
	cout << "Book Year : ";
	cin >> newnode->book_year;
	cout << "Book Author : ";
	cin >> newnode->book_author;
	cout << "Book Publisher : ";
	cin >> newnode->book_publisher;
	newnode->next = NULL;
	
	if (head == NULL) { 
		head = newnode;
	}
	else {
		ClassInfo* last = head;
		while (last->next != NULL) {
			last = last->next;
		}
		last->next = newnode;
	}
	sz++;
}

int main() {
	LinkedList library;
	bool option = false;
	cout << "Menu: ";
	cout << "\n\t1. Add Record";
	cout << "\n\t2. Display Record";
	cout << "\n\t3. Best Student";
	cout << "\n\t4. Search Student";
	cout << "\n\t5. Update Student";
}


