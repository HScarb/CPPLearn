//placenew1.cpp -- new, placement new, no delete
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;
class Test
{
public:
	Test(const string & s = "Test", int n = 0)
	{
		words = s;
		number = n;
		cout << words << " constructed\n";
	}
	~Test(){ cout << words << " destroyed\n"; }
	void Show()const { cout << words << ", " << number << endl; }
private:
	string words;
	int number;
};

int main()
{
	char * buffer = new char[BUF];		//get a block of memory

	Test * pc1, *pc2;

	pc1 = new(buffer)Test;				//place object in buffer
	pc2 = new Test("Heap1", 20);		//place object on heap

	cout << "Memory block addresses:\n" << "buffer: "
		<< (void *)buffer << "    heap: " << pc2 << endl;
	cout << "Memory contents:\n";
	cout << pc1 << ": ";
	pc1->Show();
	cout << pc2 << ": ";
	pc2->Show();

	Test * pc3, *pc4;
//fix placement new location
	pc3 = new(buffer + sizeof(Test))Test("Bad Idea", 6);
	pc4 = new Test("Heap2", 10);

	cout << "Memory contents:\n";
	cout << pc3 << ": ";
	pc3->Show();
	cout << pc4 << ": ";
	pc4->Show();

	delete pc2;			//free Heap1
	delete pc4;			//free Heap2
//explicitly destroy placement new objects
	pc3->~Test();		//destroy object pointed to by pc3
	pc1->~Test();		//destroy object pointed to by pc1
	delete[]buffer;		//free buffer
	cout << "Done\n";
	system("pause");
	return 0;
}