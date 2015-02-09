#include<iostream>
#include<iomanip>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void showbox(box b);
void setbox(box * pb);

int main()
{
	box carton = { "Bingo Boxer", 2, 3, 5 };
	setbox(&carton);
	showbox(carton);
	system("pause");
	return 0;
}
void showbox(box b)
{
	cout << "Maker: " << b.maker
		<< "\nheight: " << b.height
		<< "\nwidth: " << b.width
		<< "\nlength: " << b.length
		<< "\nvolunme" << b.volume << endl;
}

void setbox(box * pb)
{
	pb->volume = pb->height * pb->width * pb->length;
}