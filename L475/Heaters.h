class Solution {
public:
	int Search(int house, vector<int> & heaters){
	    int low = 0;
	    int high = heaters.size()-1;
		
		if(house < heaters[0]) return heaters[0] - house;
		if(house > heaters[high]) return house - heaters[high];
		
		while( low <= high ){
			int mid = low + (high-low)/2;
			if(house == heaters[mid]) return 0;
			if(house > heaters[mid]) low = mid+1;
			if(house < heaters[mid]) high = mid-1;
		}
		return fmin((heaters[low]-house), (house - heaters[high]));
	}
	
	
	int findRadius(vector<int>& houses, vector<int>& heaters) {
        int numhouse = houses.size(); //num of houses
		sort(heaters.begin(),heaters.end());
		int max = 0;
		for(int i = 0; i< numhouse; i++){
			int min = Search(houses[i],heaters);
			max = fmax(max,min);
		}
		return max;
    }
};