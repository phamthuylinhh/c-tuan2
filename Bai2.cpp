#include<iostream> //khai báo thu vi?n
int main()
{
	int a; // khai báo bien a kieu int so nguyen
	int b;// khai bao bien b kieu int so nguyen

	std::cout<<("Nhap a=");// nh?p gia tri a  
	std::cout<<("\nNhap b="); // nhap gia tri b
	std::cin>> a >> b; // gia tri  a va b
	std::cout<<" \nTong hai so "<< a<<" va "<< b<<" la: "<<a+b;//in ra
	std::cout<<" \nHieu hai so "<< a<<" va "<< b<<" la: "<<a-b;
	std::cout<<" \nTich hai so "<< a<<" va "<< b<<" la: "<<a*b;
	std::cout<<" \nThuong hai so "<< a<<" va "<< b<<" la: "<<float (a)/b;
	return 0 ;// ch?y chuongtrinh va không g?p ph?i l?i
}
// chuong trình trên dùng d? th?c hi?n bài toán và các phép toán c?ng tr? nhân chia 
