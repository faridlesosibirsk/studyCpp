#pragma once

//void swap(int *a, int *b) {
void swap(int &a, int &b) {
	//int tmp = *a;
	int tmp = a;
	//*a = *b;
	a = b;
	//*b = tmp;
	b = tmp;
}
