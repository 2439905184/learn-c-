gcc Dll.c -shared -o dll.dll
gcc Main.c dll.dll -o test.exe