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
	for (int a = 2; a <= N; ++a) {     //ö��a��[2,N]
		for (int b = 2; b < a; ++b) {    //����ÿһ��a��ö��b��[2,a-1]
			for (int c = b; c < a; ++c) {   //����ÿһ��a��b��ö��c��[b,a-1]
				for (int d = c; d < a; ++d) {     //����ÿһ��a\b\c��ö��d��[c,a-1]
					if (a*a*a == b * b*b + c * c*c + d * d*d)    //��ö�ٳ�һ����������Ҫ�����ӡ���
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