#include<conio.h>
#include"CMangLaBai.h"
void main()
{
	CMangLaBai *x = new CMangLaBai();
	cout << "Nhap mang la bai\n";
	cin >> x;
	cout << "Mang la bai\n";
	cout << x;
	cout << "\nTong so nut: " << x->TinhTongSoNut();
	cout << "\nSo la bai do: " << x->DemSoLuongBaiDo();
	if (x->KiemTraLaBaiCungSoNut())
		cout << "\nCo 2 bai do cung so nut";
	else
		cout << "\nKhong co 2 bai do cung so nut";
	delete x;
	_getch();
}