#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
    cout << "Escribe N de argumentos: ";
    cin >> argc;
    cout << "N de argumentos: " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "  argv[" << i << "] : " << argv[i] << endl;
    }
    Sleep( atoi(argv[1]) );
    cout << "Hello World!\n";
    return 0;
}
