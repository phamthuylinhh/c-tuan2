#include<iostream> //khai b�o thu vi?n
int main()
{
	int a; // khai b�o bien a kieu int so nguyen
	int b;// khai bao bien b kieu int so nguyen

	std::cout<<("Nhap a=");// nh?p gia tri a  
	std::cout<<("\nNhap b="); // nhap gia tri b
	std::cin>> a >> b; // gia tri  a va b
	std::cout<<" \nTong hai so "<< a<<" va "<< b<<" la: "<<a+b;//in ra
	std::cout<<" \nHieu hai so "<< a<<" va "<< b<<" la: "<<a-b;
	std::cout<<" \nTich hai so "<< a<<" va "<< b<<" la: "<<a*b;
	std::cout<<" \nThuong hai so "<< a<<" va "<< b<<" la: "<<float (a)/b;
	return 0 ;// ch?y chuongtrinh va kh�ng g?p ph?i l?i
}
// chuong tr�nh tr�n d�ng d? th?c hi?n b�i to�n v� c�c ph�p to�n c?ng tr? nh�n chia 
