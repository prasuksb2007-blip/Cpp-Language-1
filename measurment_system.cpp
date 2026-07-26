#include <iostream>



int main(void) {
	int   sys; 		// measurement system
	float m, ft, in;	// metres, feet and inches
	int   ift;		// feet but as integer
	
	std::cout << "What is your measurement system? 0-metric/1-imperial: ";
	std::cin >> sys;

	// metric?
	if(sys == 0) {
		std::cout << "m = ";
		std::cin >> m;

		// inches first
		in = m / 0.0254;
		// we need integral number of feet
		ift = in / 12;
		// remainder is a real number of inches
		in = in - (ift * 12);
		std::cout << ift << "'" << in << "\"" << std::endl;

	// imperial?
	} else if(sys == 1) {
		std::cout << "ft = ";
		std::cin >> ft;
		std::cout << "in = ";
		std::cin >> in;

		// cumulate inches and feet as inches
		in += 12 * ft;

		// convert inches into meters
		m = in * 0.0254;

		std::cout << m << "m" << std::endl;
	}
	return 0;
}
