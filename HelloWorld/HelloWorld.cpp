#include <iostream>
#include <windows.h>

using namespace std;

//traducir a humano
//cadena inmutable
const char* getProcType(int proc)
{
    switch (proc)
    {
    case 0: return "x86";
    case 5: return "ARM";
    case 6: return "Intel Titanium - based";
    case 9: return "x64 (AMD or Intel)";
    case 12: "ARM64";
    default: return "PUBG";
    }
}

int main(int argc, char** argv)
{
    cout << "Escribe N de argumentos: ";
    cin >> argc;
    cout << "N de argumentos: " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Escribe argumentos: ";
        cin >> argv[i];
        cout << "  argv[" << i << "] : " << argv[i] << endl;
    }
    if (argc > 1)
    {
        Sleep( atoi(argv[1]) );
    }
    cout << "Hello World!\n";
    SYSTEM_INFO sisinfo;
    GetSystemInfo(&sisinfo);
    std::cout << "Procesador: " << getProcType(sisinfo.wProcessorArchitecture) << "\n";
    return 0;
}
