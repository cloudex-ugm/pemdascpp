// menunjukkan min heap untuk antrian prioritas
#include <iostream>
#include <queue>
using namespace std;

void antrianPrioritas(
	priority_queue<int, vector<int>, greater<int> > gq)
{
	priority_queue<int, vector<int>, greater<int> > g = gq;
	while (!g.empty()) {
		cout << '\t' << g.top();
		g.pop();
	}
	cout << '\n';
}

// kode Driver
int main()
{
	priority_queue<int, vector<int>, greater<int> > gpq;
	gpq.push(20);
	gpq.push(60);
	gpq.push(40);
	gpq.push(10);
	gpq.push(1);

	cout << "Antrian prioritas gpq : ";
	antrianPrioritas(gpq);

	cout << "\nukuran gpq : " << gpq.size();
	cout << "\nmenerapkan top pada gpq : " << gpq.top();
	cout << "\nmenerapkan pop pada gpq : ";
	gpq.pop();
	antrianPrioritas(gpq);

	return 0;
}
