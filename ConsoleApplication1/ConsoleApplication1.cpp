// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> //allows us to write to the console
#include <algorithm> //allows us to use the standard array sort

using namespace std; // avoids having to write std:: every time

int main()
{
	// collect what each person ate in a size 5 array
	int arrPn[5]; //note you can't have dynamic arrays
	int arrPr[5] = { 1,2,3,4,5 };
	int temp = 0;
	int iter = 0;
	int i = 0; 
	int j = 0;
	int x = 0;

	// collect number of pancakes by person
		do { 
			cout << "How many pancakes did person " << arrPr[iter] << " eat?\n";
			cin >> arrPn[iter];
			++iter;
		} while (iter < 5);
		// reset iter
		iter = 0;
		
		cout << "Would you like the list sorted? 0 for no, 1 for ascending, 2 for descending.\n";
		cin >> x;


		switch (x) {
		case 0:
			break;
		
		case 1:
			for (i = 0; i < 4; i++) {
				for (j = 0; j < 4; j++) { //stop one step early, otherwise we will overflow
					// this bit swaps both arrays around
					if (arrPn[j] > arrPn[j + 1]) {
						
						temp = arrPn[j];
						arrPn[j] = arrPn[j + 1];
						arrPn[j + 1] = temp;

						temp = arrPr[j];
						arrPr[j] = arrPr[j + 1];
						arrPr[j + 1] = temp;
					}
				}
			}
			break;
		
		case 2:
			for (i = 0; i < 4; i++) {
				for (j = 0; j < 4; j++) {
					// this bit swaps both arrays around
					if (arrPn[j] < arrPn[j + 1]) {

						temp = arrPn[j];
						arrPn[j] = arrPn[j + 1];
						arrPn[j + 1] = temp;

						temp = arrPr[j];
						arrPr[j] = arrPr[j + 1];
						arrPr[j + 1] = temp;
					}
				}
			}
			break;
		
		
		
		}
			do {
				if (arrPn[iter] == 1) {
					cout << "Person " << arrPr[iter] << " ate " << arrPn[iter] << " pancake.\n";
				}
				else {
					cout << "Person " << arrPr[iter] << " ate " << arrPn[iter] << " pancakes.\n";
				}
				++iter;
			} while (iter < 5);
	
		system("PAUSE");
		return 0;
		}