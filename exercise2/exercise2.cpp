#include <iostream>
using namespace std;

int n;
int x;
int alif[107];

void input() {

	cout << "masukan jumalh array = " << endl;
	cin >> n;

	cout << "masukan nilainya =" << endl;
	for (int i = 0;i < n;i++) {
		cin >> alif[i];
	}

	cout << "nilai yang dicari=" << endl;
	cin >> x;
}

void binarysearch(int n, int alif[107],int x) {
	int alifian = 0;
	int aqilah = n - 1;
	int mid = (alifian + aqilah) / 2;

	while (alifian <= aqilah) {
		if (alif[mid] == x) 
		{
			cout << "found" << endl;
			return;
		}
		else if (x < alif[mid]) 
		{
			aqilah = mid - 1;
		}
		else
		{
			alifian = mid + 1;
		}
	}
	cout << "not found" << endl;
}

int main(int x) {
	int n=0;
	int alif[107];

	input();
	binarysearch(n, alif, x);

	return 0;
}