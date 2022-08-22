#define DllExport __declspec(dllexport)

int DllExport export_func();

DllExport char* export_char = "my export";

int export_func()
{
    return 1;
}