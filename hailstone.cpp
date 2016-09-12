// CSCI 3300
// Assignment: 1
// Author:     Nigel Smith
// File:       hailstone.cpp
// Tab stops:  none

// This program shows the greatest common divisor
// of two numbers that are read from the user.

#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;

int i, a, entry;
bool done = false;
vector<int>hailseq;
int large;

int hail(int a) {
	int seqnum = a;

	hailseq.push_back(seqnum);

	while (seqnum != 1) {
		if (seqnum % 2) {
			seqnum = seqnum * 3 + 1;
			hailseq.push_back(seqnum);
		}
		else {
			seqnum /= 2;
			hailseq.push_back(seqnum);
		}
	}

	for (size_t i = 0; i < hailseq.size(); i++)
		cout << hailseq[i] << " ";
	cout << "\n";

	return 0;
}

// hailLength(n) returns the length of the hailstone sequence
// starting at n.

int hailLength() {
	cout << "The length of the sequence is ";
	cout << hailseq.size();
	cout << "\n";
	return 0;
}

// hailLarge(n) returns the largest of the hailstone sequence
// starting at n.

int hailLarge() {
	cout << "The largest number is the sequence is ";

	for (int y = 0; y < hailseq.size(); y++) {
		if (hailseq[y] > large) {
			large = hailseq[y];
		}
	}

	cout << large;
	cout << "\n";

	return 0;
}

// hailLongestLength(a) returns the longest length of the hailstone sequence
// starting at n.

int hailLongestLength(int a) {
	int num = a;
	int longest = 0;
	int length;
	vector<int>temp;

	cout << "The longest hailstone sequence starting with a number up to " << num << " has length ";

	for (int i = 1; i < num + 1; i++) {

		int seqnum = i;

		temp.push_back(seqnum);

		while (seqnum != 1) {
			if (seqnum % 2) {
				seqnum = seqnum * 3 + 1;
				temp.push_back(seqnum);
			}
			else {
				seqnum /= 2;
				temp.push_back(seqnum);
			}
		}

		if (temp.size() > longest) {
			longest = temp.size();
			length = i;
		}
		temp.clear();
	}

	cout << longest << "\n";

	cout << "The longest hailstone sequence starting with a number up to " << num << " begins with " << length << "\n";
	return 0;
}

// hailLongestBegins(a) returns the longest length of the hailstone sequence
// starting at n.

int hailLongestBegins(int b) {
	printf("The longest hailstone sequence starting with a number up to begins with ");
	return 0;
}

int main() {
	cout << "What number shall I start with? "; cin >> a;

	cout << "The hailstone sequence starting at " << a << " is: " << "\n";;

	hail(a);
	hailLength();
	hailLarge();
	hailLongestLength(a);

	system("pause");
	return 0;
}