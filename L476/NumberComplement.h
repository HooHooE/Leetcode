int findComplement(int num){
	int tmp = 0;
	unsigned mask = 1;
	while(mask<num){
		if((num&mask) == 0) tmp = (tmp | mask);
		mask = mask << 1;
	}
	return tmp;
}