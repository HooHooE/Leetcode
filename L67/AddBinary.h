class Solution {
public:
string addBinary(string a, string b) {
	int alen = a.length()-1;
	int blen = b.length()-1;
	int c = 0;
	string tmp;
	while (alen>= 0 || blen >= 0 || c==1) {
		c += alen >= 0 ? a[alen--]-'0' : 0; 
		c += blen >= 0 ? b[blen--]-'0' : 0; 
		tmp = char(c%2 + '0') + tmp;
		c=c/2;
	}
	return tmp;
}
};