#include <stdio.h>
#include <string.h>

// ADIKTIF PROGRAM

bool isOneDigit(char[]);
int hitungJumlah(char[]);

int main(){
	char input[100];
	
	int i, n, hasil, result;
	bool x, y;
	result = 0; 
		
	printf("Input: ");
	scanf("%s", &input);
	
	x = isOneDigit(input);
	
	if (x == false) {
		//hitung jumlah
		hasil = hitungJumlah(input);
		result++;
		
		char buf[100];
		//convert int to string
    	n = sprintf(buf, "%d", hasil);
		
		y = isOneDigit(buf);
		
		while (y == false) {
			hasil = hitungJumlah(buf);
			result++;
			n = sprintf(buf, "%d", hasil);
			
			y = isOneDigit(buf);
		}
	}
	
	printf("Output: %d", result);
	
	return 0;
}

//fungsi menentukan apakah input nya 1 digit 
bool isOneDigit(char angka[]) {
	char x[100];
	
    int digit = strlen(angka);

	if (digit > 1) {
		return false;
	}
	
	return true;
}

//fungsi untuk menghitung jumlah bilangan
int hitungJumlah(char angka[]) {
	int n, i, hasil;
	n = strlen(angka);
	hasil = 0;
	
	for(i=0; i<n; i++){
		int x;
	
		//convert string to int
		x = (int)angka[i] - 48;
		
		hasil = hasil + x;
	}
	
	return hasil;
}
