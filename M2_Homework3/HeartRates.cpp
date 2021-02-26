#include <iostream>
#include <string>
#include "HeartRates.hpp"
using namespace std;

//Constructors
HeartRates::HeartRates() : _day{0},_month{0}, _year{0}, _name{"Unknown"}, _last_name{"Unknown"} {
}

HeartRates::HeartRates(const int d, const int m, const int y,const string n,const string lname){
	set_day(d);
	set_month(m);
	set_year(y);
	set_name(n);
	set_lname(lname);
}

//Destructor
HeartRates::~HeartRates(){ }
//Setters
void HeartRates::set_day(int d){
	if(d>=0){
		_day=d;
	}
}

void HeartRates::set_month(int m){
	if(m>=0){
		_month=m;
	}
}

void HeartRates::set_year(int y){
	if(y>=0){
		_year=y;
	}
}

void HeartRates::set_name(string n){
	_name=n;
}

void HeartRates::set_lname(string lname){
	_last_name=lname;
}


//Getters
int HeartRates::day() const{
	return _day;
}


int HeartRates::month() const{
	return _year;
}


int HeartRates::year() const{
	return _year;
}


string HeartRates::name() const{
	return _name;
}


string HeartRates::last_name() const{
	return _last_name;
}

//Methods
//This Method will calculate the age of the user, when it provides us the current the current date
int HeartRates::GetAge(){
	int cday,cmonth,cyear;
	cout << "Pls provide me the current date.\nMonth:" <<endl;
	cin >> cmonth;

	cout << "Day:" << endl;
	cin >> cday;

	cout << "Year:"<< endl;
	cin >> cyear;

	int age= cyear- _year;
	
	if(cmonth<_month){
		age--;
	}
	if(cmonth==_month){
		if(cday<_day){
			age--;
		}
	}

	return age;

}

//A simple method that will develop the maximum Heart Rate.
int HeartRates::getMaximumHeartRate(int age){

	int maxHR=220-age;
	
	return maxHR;
}

float HeartRates::getTargetHeartRate50(int hmaxrate){
	
	float target_rate= hmaxrate*.50;
	
	return target_rate;
}

float HeartRates::getTargetHeartRate85(int hmaxrate){
	
	float target_rate= hmaxrate*.85;
	
	return target_rate;
}





