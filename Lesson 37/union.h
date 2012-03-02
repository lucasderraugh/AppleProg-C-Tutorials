struct People {
	int age;
	float height;
	union FavoriteNumber {
		int myInt;
		double myDouble;
		float myFloat;
	} n;
};