#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for (int i = 0; i <= n; i++)
		cout << "i = " << i << ": " << i * i + 3 * i << endl;
	
	return 0;
}