#include<stdio.h>

int main(){
	// khai bao bien
	int bankinh = 3;
	float pi = 3.14, P, S;
	// tinh P va S hinh tron
	P = (bankinh * 2)*pi;
	S =(bankinh * bankinh) * pi;
	printf("Chu vi hinh tron la : %f\n", P);
	printf("Dien tich hinh tron la : %f\n", S);
	return 0;
}
