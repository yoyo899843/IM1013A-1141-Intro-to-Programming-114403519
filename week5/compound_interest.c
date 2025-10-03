# include <stdio.h>
# include <math.h>

int main(void){
	double principle = 1000.0;
	double rate = .05;

	printf("%4s%21s\n", "Year", "Amount on deposit");
	for (unsigned int year = 1; year <= 10; ++year){
		double amount = principle * pow(1.0 + rate, year);
		printf("%4u%21.2f\n", year ,amount);
	}
}