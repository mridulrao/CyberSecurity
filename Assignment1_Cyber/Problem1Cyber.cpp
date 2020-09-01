
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int minimum;
	cout << "You have entered " << argc
		<< " arguments:" << "\n";

    minimum= atoi(argv[1]);
    for(int i=2;i<argc-1;i++)
    {
        if(atoi(argv[i])<minimum)
            minimum=atoi(argv[i]);
    }

    cout << "Minimum is" << minimum;
	return 0;
}
