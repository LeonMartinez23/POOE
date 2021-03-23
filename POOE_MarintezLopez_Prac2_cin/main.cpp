#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x,y,z;
    cout << "5 * 3 = " << 5*3 << endl;

    //Recordando programacion basica en C
    scanf("%d %d %d",&x,&y,&z);
    printf("El numero que introdujo es: %d %d %d",x,y,z);

    //Haciendo lo mismo (capturar un dato) en C++
    cin>>x>>y>>z;
    cout<<"El numero que introdujo con cin es: " <<x<<" "<<y<<" y "<<z<<endl;

    return 0;
}
