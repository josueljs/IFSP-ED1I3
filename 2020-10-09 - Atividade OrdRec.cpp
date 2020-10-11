#include <iostream>
using namespace std;

void insertionSort(int *v, int tam) {
   int key, j;
   for(int i = 1; i<tam; i++)
   {
      key = v[i];
      j = i;
      while(j > 0 && v[j-1]>key) {
         v[j] = v[j-1];
         j--;
      }
      v[j] = key;
   }
}
   
void print(int t, int *a) {
	int i;
	for(i=0; i<t; ++i) {
		cout << "Elemento: " << i << " = " << a[i] << endl;
	}
	cout << "------------------------" << endl;
}

int main(int argc, char** argv)
{
	int v[8] = {26,49,38,13,58,87,34,93};
	int tam = sizeof(v)/sizeof(int);
	
	print(tam,v);
	insertionSort(v,tam);
	print(tam,v);
	
	return 0;
}