//============================================================================
// Name        : Patel_Harsh_Assignment_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Calculating Sum of integers
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int calculate_sum(vector<string>& expr){
	//precondition: none.
	//Postcondition: make sure proper sum of integers is calculated.
    int sum = 0;
    for (int i = 0; i < expr.size(); ++i){
    	if (expr[i] == "-") sum -= stoi(expr[i+1]); //converting string to int.
    	else if (expr[i] == "+") sum += stoi(expr[i+1]);
    }
    return sum;
}

int main() {
	//precondition: a sequence of only integers and either '-' or '+' operators is inputted.
	//postcondition: differentiate each term and save it in a vector
	cout << "Enter a sequence of numbers followed by a operator: ";
	string exp, number = "", oper;
	int sum;
	vector<string> terms;
	getline(cin,exp);
// if first # is positive, add '+' at the front to make summation easier later on.
	if (exp[0] != '-') { oper = '+'; terms.push_back(oper); }
	for (int i = 0, len = exp.size(); i < len; ++i){
		if (exp[i] != '+' && exp[i] != '-'){number += exp[i]; continue; } //multiple digits
		else if (exp[i] == '+' || exp[i] == '-') {                        // in a number
			terms.push_back(number); //if current index is an operator, save the number in vector
			oper = exp[i];
			terms.push_back(oper); // also save the operator in the vector
			number = ""; // reset the number for next sweep.
		}
	}
	terms.push_back(number);
	sum = calculate_sum(terms);
	cout << "\nThe sum is: " << sum << endl;
}
