#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	unsigned int start_time = clock();
	fstream file;
	file.open("27-A.txt");
	string s;
	getline(file, s);
	int r = stoi(s);
	int* x = new int[r];
	int max = 0;
	int k = 0;
	int r2 = 0;
	for (int i = 0; getline(file, s); i++) {
		r2 = stoi(s);
		x[i] = r2;
	}

	for (int i = 0; i < r-2; i++) {
		for (int j = i+1; j < r-1; j++) {
			for (int z = j+1; z < r; z++) {
				int qwe = (x[i] + x[j] + x[z]);
				if (qwe % 3 == 0) {
					k = qwe;
					
				}
				if (max < k) {
					max = k;
					cout << max << endl;
				}
			}
		}
	}
	cout << max;
	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;

	cout << endl << search_time << "mc";
    return 0;
}