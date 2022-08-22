#define DllExport __declspec(dllexport)

int DllExport export_func();

int export_func()
{
    return 1;
}