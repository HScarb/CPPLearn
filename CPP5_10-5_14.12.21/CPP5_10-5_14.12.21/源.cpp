#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

struct customer
{
	char fullname[35];
	double payment;
};

class Stack
{
public:
	Stack();
	bool isempty()const;
	bool isfull()const;
	bool push(const customer & i);
	bool pop(customer & i);
private:
	enum{ MAX = 10 };
	customer items[MAX];
	int top;
};

Stack::Stack()
{
	top = 0;
}

bool Stack::isempty()const
{
	return top == 0;
}

bool Stack::isfull()const
{
	return top == MAX;
}

bool Stack::push(const customer &i)
{
	if (top < MAX)
	{
		items[top++] = i;
		return true;
	}
	else
		return false;
}

bool Stack::pop(customer &i)
{
	if (top > 0)
	{
		i = items[--top];
		return true;
	}
	else
		return false;
}

int main()
{
	Stack st;                    //create an empty stack
	char ch;
	customer po;
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case'A':
		case'a':
			cout << "Enter a PO number to add: ";
			cin >> po.payment;
			if (st.isfull())
				cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isempty())
				cout << "stack already empty\n";
			else{
				st.pop(po);
				cout << "PO #" << po << " popped\n";
			}
			break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";
	system("pause");
	return 0;
}
