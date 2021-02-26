#include <iostream>
#include <string>

using namespace std;

class HeartRates{
	private:
		int _day,_month,_year;
		string _name,_last_name;
	public:
		//Constructors
		HeartRates();
		HeartRates(const int day,const int month, const int year,const string name, const string last_name);

		//Destructors
		~HeartRates();
		//Setters
		void set_day(int d);
		void set_month(int m);
		void set_year(int y);
		void set_name(string n);
		void set_lname(string lname);

		//Getters
		int day() const;
		int month() const;
		int year() const;
		string name() const;
		string last_name() const;

		//Methods
		int GetAge();
		int getMaximumHeartRate(int y);
		float getTargetHeartRate50(int hmaxrate);
		float getTargetHeartRate85(int hmaxrate);
};

	
