#include <stdio.h>
#define DllImport __declspec(dllimport)

int DllImport export_func();
char* DllImport export_char;

int main()
{
    printf("%d",export_func());
    printf(export_char);
}