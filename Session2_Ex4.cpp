#include<stdio.h>

int main(){
	// khai bao bien 
	int dai_hcn= 8,rong_hcn = 6, P, S;
	// Tinh dien tich va chu vi hcn
	P = 2 * (dai_hcn + rong_hcn);
	S = dai_hcn * rong_hcn;
	// in ket qua ra man hinh
	printf("Chu vi hinh chu nhat la: %d \n", P);
	printf("Dien tich hinh chu nhat la: %d \n", S);
	return 0;
}
