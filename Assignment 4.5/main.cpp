//  Assignment 4.5
//
//  Created by Angela Flores on 11/17/22.
//

#include <iostream>
#include <cstring>
using namespace std;

char *removeBlanks( char a[])
{
    char *b = new char[9];
    for (int i=0; i<9; i++) {
        b[i]=a[i];
        if (b[i]==' ') {
            for (int k=i; k<9; k++) {
                b[k]=b[k+1]; } } }
    return b;
}
int main()
{
    char s[9]={'H','e','l','l','o',' ','M','o','m'};
    char *rem;
    cout<<"Original string: ";
    for (int i=0; i<9; i++){
        cout<<s[i]; }
    cout<<endl;
    cout<<"============================="<<endl;
    rem=removeBlanks(s);
    cout<<"Copied string: ";
    for (int i=0; i<9; i++){
        cout<<rem[i]; }
    cout<<endl;
    cout<<"============================="<<endl;
    cout<<"Checking original: ";
    for (int i=0; i<9; i++){
        cout<<s[i]; }
    cout<<endl;
    return 0;
}
