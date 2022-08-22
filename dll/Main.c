#include <stdio.h>
#define DllImport __declspec(dllimport)

int DllImport export_func();

int main()
{
    printf("%d",export_func());
}