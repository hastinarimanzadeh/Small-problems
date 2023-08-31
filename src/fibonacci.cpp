#include <iostream>

int fib_recursive(int n) {
	if (n == 0) return n;
	if (n == 1) return n;
	return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int fib(int n) {
	int t1 = 1;
	int t2 = 2;
	int i = 1;
	while (i < n) {
		int temp = t1 + t2;
		t1 = t2;
		t2 = temp;
		i++;
}
	return t1;
}

int even_values_fib(int limit) {
	int a = 1, b = 1, s, sum = 0;
	while (b < limit) {
		if (b % 2 == 0)
			sum += b;
		s = a + b;
		a = b;
		b = s;
	}
	return sum;

}
int main() {

	std::cout << even_values_fib(4000000) << std::endl;
	return 0;
}


