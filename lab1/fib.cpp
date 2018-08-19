#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n = 100;// numero maximo
	
	long long i, j;
	i = j = 1;

	int so = 0, io = 0, lo = 0;
	cout << "1 1" << endl;
	for( int it = 1; it < n; it++ ){
		if( j > SHRT_MAX && !so) so = it;
		if( j > INT_MAX && !io) io = it;
		if( j < 0 && !lo ) lo = it;
		cout << it + 1<< " " << j << endl;
		j += i;
		i = j - i;
	}
	cout << "Short Overflow at n = " << so << endl;
	cout << "Int Overflow at n = " << io << endl; 
	cout << "long long Overflow at n = " << lo << endl; 

	return 0;
}
