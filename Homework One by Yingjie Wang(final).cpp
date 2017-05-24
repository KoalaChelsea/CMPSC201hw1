/*
CMPSC201 Homework One
Purpose: Create a console application to calculate the real solution of a quadratic equation ax2+bx+c=0.
input:  coefficients a, b, and c (integer values only)
output: the quadratic equation (in the correct format) along with the correct solution(s), or output that there is no real solution.
Date 6/12/2015
By Yingjie(Chelsea) Wang
*/

#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int main()
{

	//input
	int NumA;
	int NumB;
	int NumC;
	double Solution;
	double Solution2;
	double SquareRootOfDelta;
	double Delta;

	cout << "CMPSC 201 - Homework 1" << endl;
	cout << "Calculate the real solution of the quadratic equation ax^2 + bx + c = 0" << endl;
	cout << "Enter the value of a: ";
	cin >> NumA;
	cout << "Enter the value of b: ";
	cin >> NumB;
	cout << "Enter the value of c: ";
	cin >> NumC;

	//set precision
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);

	//process & output
	if (NumA == 0) {
		if ((NumB == 0) && (NumC != 0)){
			cout << NumC << " = 0 " << "is not a valid equation" << endl;
		}
		else if ((NumB != 0) && (NumC != 0)){
			Solution = (float)-NumC / NumB;
			if (NumC >= 0){
				cout << "The solution of the quadratic equation " << NumB << "x+" << NumC << " = 0 is " << setprecision(1) << Solution << endl;
			}
			else{
				cout << "The solution of the quadratic equation " << NumB << "x" << NumC << " = 0 is " << setprecision(1) << Solution << endl;
			}
		}
		else if ((NumB != 0) && (NumC == 0)){
			Solution = (float)-NumC / NumB;
			cout << "The solution of the quadratic equation " << NumB << "x = 0 is " << setprecision(1) << Solution << endl;
		}
		else{
			cout << "invalid input" << endl;
		}
	}
	else if (NumA != 0){
		Delta = NumB * NumB - 4 * NumA * NumC;
		SquareRootOfDelta = sqrt(Delta);

		if (Delta < 0){
			if ((NumB != 0) && (NumC == 0)){
				if (NumB >= 0){
					cout << "The quadratic equation " << NumA << "x^2+" << NumB << "x = 0  does not have a real solution." << endl;
				}
				else{
					cout << "The quadratic equation " << NumA << "x^2" << NumB << "x = 0  does not have a real solution." << endl;
				}
			}
			else if ((NumB == 0) && (NumC != 0)){
				if (NumC >= 0){
					cout << "The quadratic equation " << NumA << "x^2+" << NumC << " = 0  does not have a real solution." << endl;
				}
				else{
					cout << "The quadratic equation " << NumA << "x^2" << NumC << " = 0  does not have a real solution." << endl;
				}
			}
			else if ((NumB != 0) && (NumC != 0)){
				if ((NumB >= 0) && (NumC >= 0)){
					cout << "The quadratic equation " << NumA << "x^2+" << NumB << "x+" << NumC << " = 0  does not have a real solution." << endl;
				}
				else if ((NumB <= 0) && (NumC >= 0)) {
					cout << "The quadratic equation " << NumA << "x^2" << NumB << "x+" << NumC << " = 0  does not have a real solution." << endl;
				}
				else if ((NumB >= 0) && (NumC <= 0)){
					cout << "The quadratic equation " << NumA << "x^2+" << NumB << "x" << NumC << " = 0  does not have a real solution." << endl;
				}
				else if ((NumB <= 0) && (NumC <= 0)){
					cout << "The quadratic equation " << NumA << "x^2" << NumB << "x" << NumC << " = 0  does not have a real solution." << endl;
				}
				else{
					cout << "invalid input" << endl;
				}
			}
			else {
				cout << "invalid input" << endl;
			}
		}
		else if (Delta == 0){
			if ((NumB == 0) && (NumC == 0)){
				Solution = (float)-NumB / (2 * NumA);
				cout << "The solution of the quadratic equation " << NumA << "x^2 = 0 is " << setprecision(1) << Solution << endl;
			}
			else {
				Solution = (float)-NumB / (2 * NumA);

				if ((NumB >= 0) && (NumC >= 0)){
					cout << "The solution of the quadratic equation " << NumA << "x^2+" << NumB << "x+" << NumC << " = 0 is " << setprecision(1) << Solution << endl;
				}
				else if ((NumB <= 0) && (NumC >= 0)) {
					cout << "The solution of the quadratic equation " << NumA << "x^2" << NumB << "x+" << NumC << " = 0 is " << setprecision(1) << Solution << endl;
				}
				else if ((NumB >= 0) && (NumC <= 0)){
					cout << "The solution of the quadratic equation " << NumA << "x^2+" << NumB << "x" << NumC << " = 0 is " << setprecision(1) << Solution << endl;
				}
				else if ((NumB <= 0) && (NumC <= 0)){
					cout << "The solution of the quadratic equation " << NumA << "x^2" << NumB << "x" << NumC << " = 0 is " << setprecision(1) << Solution << endl;
				}
				else{
					cout << "invalid input" << endl;
				}
			}
		}
		else if (Delta > 0){
			Solution = (float)(-NumB + SquareRootOfDelta) / (2 * NumA);
			Solution2 = (float)(-NumB - SquareRootOfDelta) / (2 * NumA);

			if ((NumB != 0) && (NumC == 0)){
				if (NumB >= 0){
					cout << "The solutions of the quadratic equation " << NumA << "x^2+" << NumB << "x = 0 are " << setprecision(1) << Solution << " and " << Solution2 << endl;
				}
				else{
					cout << "The solutions of the quadratic equation " << NumA << "x^2" << NumB << "x = 0 are " << setprecision(1) << Solution << " and " << Solution2 << endl;
				}
			}
			else if ((NumB == 0) && (NumC != 0)){
				if (NumC >= 0){
					cout << "The solutions of the quadratic equation " << NumA << "x^2+" << NumC << " = 0 are " << setprecision(1) << Solution << " and " << Solution2 << endl;
				}
				else{
					cout << "The solutions of the quadratic equation " << NumA << "x^2" << NumC << " = 0 are " << setprecision(1) << Solution << " and " << Solution2 << endl;
				}
			}
			else if ((NumB != 0) && (NumC != 0)){
				if ((NumB >= 0) && (NumC >= 0)){
					cout << "The solutions of the quadratic equation " << NumA << "x^2+" << NumB << "x+" << NumC << " = 0 are " << setprecision(1) << Solution << " and " << Solution2 << endl;
				}
				else if ((NumB <= 0) && (NumC >= 0)){
					cout << "The solutions of the quadratic equation " << NumA << "x^2" << NumB << "x+" << NumC << " = 0 are " << setprecision(1) << Solution << " and " << Solution2 << endl;
				}
				else if ((NumB >= 0) && (NumC <= 0)){
					cout << "The solutions of the quadratic equation " << NumA << "x^2+" << NumB << "x" << NumC << " = 0 are " << setprecision(1) << Solution << " and " << Solution2 << endl;
				}
				else if ((NumB <= 0) && (NumC <= 0)){
					cout << "The solutions of the quadratic equation " << NumA << "x^2" << NumB << "x" << NumC << " = 0 are " << setprecision(1) << Solution << " and " << Solution2 << endl;
				}
				else {
					cout << "invalid input" << endl;
				}
			}
			else {
				cout << "invalid input" << endl;
			}
		}
		else {
			cout << "invalid input" << endl;
		}
	}
	else {
		cout << "invalid input" << endl;
	}


	return 0;
}
