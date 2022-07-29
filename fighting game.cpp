#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<math.h>
using namespace std;

int main()
{
    int r;
    cin >> r; cin.ignore();
    int a;
    int b;
    int a_1;
    int b_1;
    cin >> a >> b >> a_1 >> b_1; cin.ignore();

for(int i=0;i<r;i++){
	a=a-b_1;
	a=a+floor(a_1/2);

	b=b-a_1;
	b=b+floor(b_1/2);

if(a<=0||b<=0){
	break;
	}
	}	
if(a>b){
	cout << "A " << a << endl;
}else{
	cout << "B " << b << endl;
	}	

    
}
