#include<iostream>
#ifndef _MOVE_H_
#define _MOVE_H_
class Move
{
public:
	Move(double a=0,double b=0);		//sets x,y to a,b
	void showmove()const;			//shows current x,y values
	Move add(const Move & m);	
	//this function add x of m to x of invoking object to get new x,
	//add y of m to y of invoking object to get new y, creates a new
	//move object initialized to new x, y values and returns it
	void reset(double a = 0, double b = 0);	//resets x,y to a,b

private:
	double x;
	double y;
};

Move::Move(double a,double b)
{
	x = a;
	y = b;
}
void Move::showmove()const
{
	std::cout << "x= " << x << " y= " << y << "\n";
}
Move Move::add(const Move & m)
{
	Move mv;
	x += m.x;
	y += m.y;
	mv = Move(x, y);
	return mv;
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}

#endif