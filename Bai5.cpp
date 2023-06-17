#include<iostream>
using namespace std;
int main () {
	int x;
	int y;
	int z;
	int t;
	
	x=-3+4%5/2;
	std::cout <<"a=" << x;
	
	y=3;
	!y%4;
	std::cout <<" \nb= " << y;
	
	z=3;
	!++z%4;
	std::cout << " \nc= " << z;
	
	t=3;;
	!(++t%4);
	std::cout << " \nd= " << t;
	
	 return 0;
} 
	
