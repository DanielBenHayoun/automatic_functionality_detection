void dum(int x, int y) {
	if (x < y) {
		return 0;
	}
	if(x >= 0) {
		return 1;
	}
	if (y >= 0) {
		return 2;
	}
	return 3;
}