namespace Jill{
	double bucket(double n){}
	double fetch;
	struct Hill{};
}
char fetch;		//global namespace
int main()
{
	using namespace Jill;		//import all namespace names
	Hill Thrill;				//create a type Jill::Hill structure
	double water = bucket(2);
	double fetch;				//not an error;hides Jill::fetch
	cin >> fetch;				//read a value into the local fetch
	cin >> ::fetch;				//read a value into global fetch
	cin >> Jill::fetch;			//read a valie into Jill::fetch
}
namespace elements
{
	namespace fire
	{
		int flame;
		//...
	}
	float water;
}
namespace myth
{
	using Jill::fetch;
	using namespace elements;
	using std::cout;
	using std::cin;
}
namespace		//unnamed namespace
{
	int ice;
	int bandycoot;
}