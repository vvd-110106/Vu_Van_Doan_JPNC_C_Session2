#include<stdio.h>

int main(){
	// khai bao bien
	int firstNumber =10, secondNumber =5;
	int plus, minus, times, divided;
	// thuc hien phép tinh 
	plus = firstNumber + secondNumber, minus = firstNumber - secondNumber;
	times = firstNumber * secondNumber, divided = firstNumber / secondNumber;
	// in ra man hinh
	printf("Tong hai so do la: %d\n", plus), printf("Hieu hai so do la: %d\n", minus);
	printf("Tich hai so do la: %d\n", times), printf("Thuong hai so do la: %d\n", divided);
	return 0;
}
