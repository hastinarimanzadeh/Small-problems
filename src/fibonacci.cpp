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

int main() {
	int n;
	std::cin >> n;
	std::cout << fib(n) << std::endl;
	return 0;
}


