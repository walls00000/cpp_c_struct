#include "main.hpp"

using namespace std;

const std::string logfile_name = "/tmp/cpp_c_struct.out";

int main() {
	cout << "Log: " << logfile_name << endl;
	// Assign logtype defined as 'logbridge' to an address
	logtype logbridge = &foo::log;

	for (int i=0;i<10;i++) {
	    // define struct params

	    std::stringstream ss;
	    ss << "Name-" << i;
	    std::string str = ss.str();
	    char *cstr = new char[str.length() +1];
        strcpy(cstr, str.c_str());

        // define struct params
        struct params config;
	    config.name = cstr;
	    config.logbridge = logbridge;
	    //Call C code with struct containing logbridge logtype function pointer.
	    setparams(&config);
	    delete [] cstr;
	}
}

namespace foo
{
	/**
	 * log(char * message)
	 * A static log function defined in a C++ code to be
	 * passed as a function pointer to a C program.
	 *
	 * message: the message to log
	 */
	static void log(char *message)
	{
		ofstream logfile;
		logfile.open("/tmp/cpp_c_struct.out", ios::app);
		logfile << "foo.log: " << message << endl;
		logfile.close();
	}




}
