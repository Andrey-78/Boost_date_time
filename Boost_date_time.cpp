#include<boost/date_time/gregorian/gregorian.hpp>
#include<iostream>

using namespace std;
namespace gr = boost::gregorian;

int main() {

	gr::date locday = gr::day_clock::local_day();
	gr::date birthday(1978, 12, 11);

	gr::date_period dp(birthday, locday);

	cout << dp.length() << endl;
}