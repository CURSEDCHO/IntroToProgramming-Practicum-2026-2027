
//1 zadacha
//#include <iostream>
//int main()
//{
//    unsigned int apples, bananas, pears;
//
//    std::cout << "Hello, c++\n";
//    std::cout << "Enter apples:\n";
//    std::cin >> apples;
//    std::cout << "Enter bananas:\n";
//    std::cin >> bananas;
//    std::cout << "Enter pears:\n";
//    std::cin >> pears;
//
//    std::cout << "Dont forget to buy apples:" <<apples <<"  pears:" <<pears <<"  and bananas:" <<bananas<<"\n";
//}


//2 zadacha
//#include <iostream>
//int main()
//{
//	double height, lenght;
//	std::cout << "Enter height:\n";
//	std::cin >> height;
//	std::cout << "Enter lenght:\n";
//	std::cin >> lenght;
//	std::cout << "Parameter: " << (height + lenght) * 2;
//	std::cout << " Area: " << height * lenght;
//}

//3 zadacha
//#include <iostream>
//int main()
//{
//	const double yen = 145, dollar = 1.1;
//	double euro;
//	std::cout << "Enter euro: ";
//	std::cin >> euro;
//	std::cout << "dollars = " << dollar * euro <<"\n";
//	std::cout << "yen = " << yen * euro;
//}
// 

//4 zadacha
//#include <iostream>
//int main()
//{
//	unsigned int num1, num2;
//	std::cin >> num1 >> num2;
//	if (num1 % num2 == 0)
//	{
//		std::cout << "true";
//	}
//	else
//	{
//		std::cout << "false";
//	}
//}
// 
//zadacha 5
//#include <iostream>
//int main()
//{
//	unsigned int num1, num2 ,num3;
//	std::cin >> num1 >> num2 >> num3;
//	std::cout << num1 << num2 << num3;
//}

//zadacha6
//#include <iostream>
//int main()
//{
//	unsined int num;
//	std::cin >> num;
//	unsined int units = num % 10;
//	unsined int tens = (num / 10) % 10;
//	unsined int hundreds = num / 100;
//	unsined int sum = units + tens + hundreds;
//	std::cout << "units: " << units <<"\n";
//	std::cout << "tens: " << tens << "\n";
//	std::cout << "hundreds: " << hundreds << "\n";
//	std::cout << "sum: " << sum << "\n";
//}
//zadacha7
#include <iostream>
int main()
{
	unsigned int a, b;
    std::cin >> a >> b;
	int prod = a * b;
	int unit = prod % 10;
	std::cout << prod <<"\n";
	std::cout << unit <<"\n";

	if (prod % 2)
	{
		std::cout << "Is odd: True";
	}
	else
	{
		std::cout << "Is odd: False";
	}
}
