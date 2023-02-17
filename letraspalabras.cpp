#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    char str[100];
    int i,totChar;
totChar=0;
    cout<<"Ingrese cualquier palabra u oracion\n";
    gets(str);

i=0;
    while(str[i] != '\0'){
        if(str[i]!=' ')
        {
            totChar++;
        }
         i++;
    }
    cout<<"El total de characteres de su palabra u oracion es = "<<totChar;
    getch();
    return 0;
}