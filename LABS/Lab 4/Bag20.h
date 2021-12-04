#ifndef BAG20
#define BAG20

class Bag20 {
private:
	int arr[20];
	int currentSize;
public:
	Bag20();
	Bag20(int);
	void insert(int);
	void show();
	int elementAt(int);
	int findFrequency(int);
	void del(int);
	Bag20 union1(Bag20);
	Bag20 leftRotate(Bag20, int);
};


#endif BAG20