//7.6.3 transmit the address of struct
#include<iostream>
#include<iomanip>
using namespace std;
struct travel_time
{
	int hours;
	int mins;
};
const int mins_per_hour = 60;
travel_time * sum(const travel_time * t1, const travel_time * t2);
void show(travel_time * t);    //receive a address

int main()
{
	travel_time day1 = { 5, 45 };
	travel_time day2 = { 4, 55 };

	travel_time * trip;
	trip = sum(&day1, &day2); //transmit address
	cout << "2 days total: ";
	show(trip);
	travel_time day3 = { 3, 35 };
	cout << "3 days total: ";
	show(sum(trip, &day3));
	delete trip;			//*delete 
	system("pause");
	return 0;
}
travel_time * sum(const travel_time * t1,const travel_time * t2)
{
	travel_time * total = new travel_time;    //****important to creat a travel_time in RAM
	total->mins = (t1->mins + t2->mins) % 60;
	total->hours = (t1->mins + t2->mins) / 60 + (t1->hours + t2->hours);
	return total;
}

void show(travel_time * t)
{
	cout << t->hours << " Hours  " ;
	cout << t->mins << " Mins" << endl;
}