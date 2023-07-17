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
    cout << "Procesador: " << getProcType(sisinfo.wProcessorArchitecture) << "\n";

    //0 malvado, 128 neutro, 255 bondadoso
    byte karma = 128;
    char estado;

    if (karma == 0 || karma < 90)
    {

    }


    cout << "karma: " << (int)karma << "\n";


    for (int i = 0; i < 20; i++)
    {
        karma += 10;
        cout << "subiendo karma: " << (int)karma << " ";

        if (karma == 0 || karma < 35)
        {
            cout << "Villano\n";
        }
        else if (karma == 35 || karma < 95)
        {
            cout << "Malo\n";
        }
        else if (karma == 95 || karma < 115)
        {
            cout << "Neutro\n";
        }
        else if (karma == 115 || karma < 200)
        {
            cout << "Bueno\n";
        }
        else
        {
            cout << "Bondadoso\n";
        }
    }

    return 0;
}
