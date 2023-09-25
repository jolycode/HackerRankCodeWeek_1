int truckTour(vector<vector<int>> petrolpumps) {
    int n = petrolpumps.size();
    int petrolRemain = 0;
    int state = 0;
    
    for (int i=0; i<n; i++){
        int petrol = petrolpumps[i][0];     
        int distance = petrolpumps[i][1]; 
        petrolRemain += petrol - distance;

        if (petrolRemain < 0){
            state = i+1;
            petrolRemain = 0;
        }
    }
return state;
}