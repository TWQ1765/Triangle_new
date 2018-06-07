#include "Triangle.h"
#include <stdio.h>

int add(int ver1, int ver2){
	
	return ver1+ver2;  //NULL is pointer value camt return int
	
}


char* getTriangleName(int base , int height , int hypotenuse){
	
	char* TriangleName;
	if ((base<=0) || (height<=0) || (hypotenuse<=0))
	{
		TriangleName = "not a Triangle";
		return TriangleName;
	}
	else
	{
		if((base == height) && (base == hypotenuse) && (height == hypotenuse))
		{	
			TriangleName = "Equilateral";
			return TriangleName;
		}
		if ((base == height) || (height == hypotenuse) || (base == hypotenuse))
		{
			TriangleName = "isosceles";
			return TriangleName;
		}
		else
		{ 
			TriangleName = "scalene";
			return TriangleName;
		}			
	}	
}

