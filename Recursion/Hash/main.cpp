#include <iostream>
#include <math.h>
#include <cstring>
#include <list>

using namespace std;

class HashTable {
private:
	static const int hashGroups = 10;
	list<pair<int, string>> table[hashGroups];
public:
	bool isEmpty() const;
	int hashFunction(int key);
	void insertItem(int key, string value);
	bool removeItem(int key);
	string searchItem(int key);
	void printTable() const;
};

bool HashTable::isEmpty() const
{
	int sum{};
	for (size_t i = {}; i < hashGroups; i++)
	{
		sum += table[i].size();
	}
	if (!sum)
	{
		return true;
	}
	return false;
}
int main()
{
	return 0;
}