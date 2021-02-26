#include <iostream>
#include <string>
#include "HeartRates.hpp"
using namespace std;

int main(){
	int d,m,y;
	string nm,lnm;
	cout<< "I'm going to calculate your HeartRate, provide me please:\nYour name: " << endl;
	getline(cin,nm);
	cout << "Last name: "<< endl;
	getline(cin,lnm);

	cout << "Month of birth: "<<endl;
	cin >> m;
	cout << "Day of birth: "<<endl;
	cin >> d;
	cout << "Year of birth: "<<endl;
	cin >> y;
	
	HeartRates x(d,m,y,nm,lnm);
	
	int age = x.GetAge();
	int maxhr= x.getMaximumHeartRate(age);
	cout << "Hi " << x.name() << " " << x.last_name() << endl;
	cout << "Your age is: " << age <<endl;
	cout << "Your maximum target Rate is: " << maxhr<< endl;
	cout << "Your target heart rate should be between: " << endl << x.getTargetHeartRate50(maxhr) << " and " << x.getTargetHeartRate85(maxhr) << endl;

	
	return 0;
}
