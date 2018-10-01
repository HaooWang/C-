#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int N;    
	double start, stop;
	
	start = clock();

	std::cin >> N; 
	start = clock();
	for (int a = 2; a <= N; ++a) {     //枚举a∈[2,N]
		for (int b = 2; b < a; ++b) {    //对于每一个a，枚举b∈[2,a-1]
			for (int c = b; c < a; ++c) {   //对于每一个a和b，枚举c∈[b,a-1]
				for (int d = c; d < a; ++d) {     //对于每一个a\b\c，枚举d∈[c,a-1]
					if (a*a*a == b * b*b + c * c*c + d * d*d)    //若枚举出一组数据满足要求，则打印输出
						std::cout << "Cude=" << a << '\t' << "Triple=" << b << '\t' << c << '\t' << d << endl;

				}
			}
		}

	}
	stop = clock();
	double duration = (stop - start) / CLK_TCK;   //To calculate the time that this function used
	std::cout << stop - start <<'\t'<<duration << endl;
	system("pause");     //Check results
	return 0;
}