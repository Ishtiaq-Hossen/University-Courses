//Single Element
#include <iostream>
using namespace std;

struct rectangle{
float height;
float width;
};
void setLengthWidth(rectangle &r){
r.height = 5.0;
r.width = 6.0;
}

void getArea(rectangle r){
cout<<r.height*r.width<<endl;
}
int main(){
  	
rectangle r;

setLengthWidth(r);
  
getArea(r);

return 0;
}