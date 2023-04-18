#include <iostream>
class Road {
	public:
	double length;
	int width;
};
int main(){
	Road road;
	road.length=12.3;
	road.width=5;
	std::cout<<"road.length "<<road.length<<std::endl;
	std::cout<<"road.width "<<road.width<<std::endl;
	return 0;
}
	