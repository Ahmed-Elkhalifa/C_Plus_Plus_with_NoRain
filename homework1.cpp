#include<iostream>

class Circle{
	float r{0.0};
	float PI = 3.14;

	public:
	Circle(float r){
		this->r = r;
	}

	float getCircumference(){
		return (2 * PI * r);
	}

	float getArea(){
		return (PI * r * r);
	}
};


int main(){

	Circle myCircle = Circle(5);

	std::cout<<"The Cirecumference of my circle is: " << myCircle.getCircumference() << std::endl;
	
	std::cout<<"The Area of my circle is: " << myCircle.getArea() << std::endl;

	return 0;
}


