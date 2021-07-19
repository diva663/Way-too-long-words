//122771691	Jul/17/2021 20:51UTC+7	cahyoajadah	71A - Way Too Long Words	GNU C++11	Accepted	31 ms	3800 KB
#include <iostream>
using namespace std;

int main(){
	int n;
	string k;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> k;
		if (k.size() > 10){
			cout << k[0] << k.size() - 2 << k[k.size()-1] << endl;
		}
		else {
			cout << k << endl;
		}
	}



	return 0;
}