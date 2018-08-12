#include"CLaBai.h"
class CMangLaBai
{
private:
	int n;
	CLaBai* *LaBai;
public:
	~CMangLaBai();
	friend istream& operator>>(istream& input, CMangLaBai* x);
	friend ostream& operator<<(ostream& output, CMangLaBai* x);
	int TinhTongSoNut();
	int DemSoLuongBaiDo();
	bool KiemTraLaBaiCungSoNut();
};