#include <iostream>
using namespace std;
void PrintTableHeader() {
	cout << "\n\n\t\t\tMultipliaction Table From 1 to 10\n\n";
	for (int i = 1; i <= 10; i++) {
		cout << "\t" << i;
	}
	cout << "\n-------------------------------------------------------------------------------------------\n";
}
string ColumSperator(int i) {
	if (i < 10)
		return "   |";
	else
		return "  |";
}
void PrintMultiplicationTable() {
	PrintTableHeader();
	for (int i = 1; i <= 10; i++) {
		cout << " " << i << ColumSperator (i)<< "\t";
		for (int j = 1; j <= 10; j++) {
			cout << j * i << "\t";
		}
		cout << "\n";
	}
}
int main() {
	PrintMultiplicationTable();
}