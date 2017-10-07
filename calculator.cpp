#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

main(){
do{
	//initiates program
	int presstostart;

	//selects operation
	int operation;

    cout << “Robby’s Calculator V0.0.1” << endl;
	cout << “Press 1 to start” << endl;
	cin >> presstostart;
} while(presstostart != 1);

   do{
//end of the line do while loop!
cout << "Press '1' for addition" << endl;
cout << "Press '2' for subtraction" << endl;
cout << "Press '3' for multiplication" << endl;
cout << "Press '4' for division" << endl;
cout << "Press '5' to square a number" << endl;
cout << "Press '6' to find the square root of a number" << endl;
cout << "Press any other number to exit" << endl;

//addition choice
if(operation = 1){
	//reactants
	double nummuha;
	double nummuhb;

	//products
	double sum;

	cout << "Enter the first number" << endl;
	cin >> nummuha;
	cout << "Enter the second number" << endl;
	cin >> nummuhb;
	sum = nummuha + nummuhb;
	cout << "The answer is " << sum << endl;
}

//subtraction choice
if(operation = 2){
	//reactants
	double nummuhc;
	double nummuhd;

	//products
	double difference;

	cout << "Enter the first number" << endl;
	cin >> nummuhc;
	cout << "Enter the second number" << endl;
	cin >> nummuhd;
	difference = nummuhc - nummuhd;
	cout << "The answer is " << difference << endl;
}

//multiplication
if(operation = 3){
	//reactants
	double nummuhe;
	double nummuhf;

	//products
	double product;

	cout << "Enter the first number" << endl;
	cin >> nummuhe;
	cout << "Enter the second number" << endl;
	cin >> nummuhf;
	product = nummuhe * nummuhf;
	cout << "The answer is " << product << endl;
}

//division
if(operation = 4){
	//reacants
	double nummuhg;
	double nummuhh;

	//products
	double quotient;

	cout <<"Enter the first number" << endl;
	cin >> nummuhg;
	cout << "Enter the second number" << endl;
	cin >> nummuhh;
	quotient = nummuhg / nummuhh;
	cout << "The answer is " << quotient << endl;
}

//squaring
if(operation = 5){
	//reactants
	double nummuhi;

	//products
	double square;
	cout << "Enter the number that you would like to square" << endl;
	cin >> nummuhi;
	square = nummuhi * nummuhi;
	cout << " The answer is " << square << endl; 
}

//square root
if (operation = 6){
	//reactants
	double nummuhj;
	double nummuhk;

	//products
	double root;

	 cout << "Enter the number you would like to find the square root of" << endl;
	 cin >> root;

	 do{
	 	nummhj = rand() % 10000000 + 1;

	 	nummuhk = root \ nummuhj;

	 }while(nummuhj != nummuhk)

	 cout << "The answer is " << nummuhk << endl;

}
}while(0 < X < 6);
    cout << ""
    return 0;
}