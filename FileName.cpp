#include <iostream>
using namespace std;
void main()
{
	char vogais[5] = { 'a','e','i','o','u' }, p = 'p';
	char palavra[999], codigo[999];
	int L, i, j, K, contar = 0;

	cout << "quantas letras tem a tua palavra?";
	cin >> L;
	cout << "qual e a palavra?";
	for (i = 0; i < L; i++)
	{
		cin >> palavra[i];

		if (palavra[i] = vogais[i])
		{
			palavra[i] = p;
			palavra[i + 1] = palavra[i - 1];
		}
		cout << palavra[i];
	}
}