#include"CMangLaBai.h"
CMangLaBai::~CMangLaBai()
{
	for (int i = 0; i < n; i++)
		delete LaBai[i];
	delete[] LaBai;
}
istream& operator>>(istream& input, CMangLaBai* x)
{
	cout << "Nhap so luong la bai: ";
	input >> x->n;
	x->LaBai = new CLaBai*[x->n];
	for (int i = 0; i < x->n; i++)
	{
		cout << "\nNhap la bai thu " << i + 1 << endl;
		x->LaBai[i] = new CLaBai();
		input >> x->LaBai[i];
	}
	return input;
}
ostream& operator<<(ostream& output, CMangLaBai* x)
{
	output << "\nSo luong la bai: " << x->n << endl;
	for (int i = 0; i < x->n; i++)
	{
		output << "\nLa bai thu " << i + 1 << endl;
		output << x->LaBai[i];
	}
	return output;
}
int CMangLaBai::TinhTongSoNut()
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		tong += LaBai[i]->GetSoNut();
	return tong;
}
int CMangLaBai::DemSoLuongBaiDo()
{
	int d = 0;
	for (int i = 0; i < n; i++)
		if (LaBai[i]->LaBaiDo())
			d++;
	return d;
}
bool CMangLaBai::KiemTraLaBaiCungSoNut()
{
	for (int i = 0; i < n - 1; i++)
		if (LaBai[i]->LaBaiDo())
			for (int j = i + 1; j < n; j++)
				if (LaBai[j]->LaBaiDo())
					if (LaBai[i]->GetSoNut() == LaBai[j]->GetSoNut())
						return true;
	return false;
}