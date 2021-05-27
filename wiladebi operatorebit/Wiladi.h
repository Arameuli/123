#pragma once
#include<iostream>
using namespace std;
class Wiladi
{
public:
	int a, b;
	Wiladi() {

	}
	~Wiladi() {

	}
	Wiladi operator + (Wiladi& obj) {
		Wiladi h;
		h.b = a * obj.a;
		h.a = (h.b / b * a) + (h.b / obj.b * obj.a);
		int m = h.a, n = h.b;
		while (m != n) {
			if (m > n) {
				m -= n;
			}
			else n -= m;
		}
		h.a /= n;
		h.b /= n;
		return h;
	}

	Wiladi operator - (Wiladi& obj) {
		Wiladi h;
		h.b = a * obj.a;
		h.a = (h.b / b * a) - (h.b / obj.b * obj.a);
		int m = h.a, n = h.b;
		while (m != n) {
			if (m > n) {
				m -= n;
			}
			else n -= m;
		}
		h.a /= n;
		h.b /= n;
		return h;
	}
	Wiladi operator * (Wiladi& obj) {
		Wiladi h;
		h.b = a * obj.a;
		h.a = b * obj.b;
		int m = h.a, n = h.b;
		while (m != n) {
			if (m > n) {
				m -= n;
			}
			else n -= m;
		}
		h.a /= n;
		h.b /= n;
		return h;
	}
	Wiladi operator / (Wiladi& obj) {
		Wiladi h;
		h.b = a * obj.b;
		h.a = b * obj.a;
		int m = h.a, n = h.b;
		while (m != n) {
			if (m > n) {
				m -= n;
			}
			else n -= m;
		}
		h.a /= n;
		h.b /= n;
		return h;
	}
};

