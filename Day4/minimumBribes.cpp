void minimumBribes(vector<int> q) {
    int bribe = 0;
    int p1 = 1;
    int p2 = 2;
    int p3 = 3;
    for (int i=0;i<q.size();++i){
        if(q[i] == p1){
            p1=p2;
            p2=p3;
            ++p3;
        } 
        else if(q[i] == p2){
            bribe++;
            p2=p3;
            ++p3;
        }
        
        else if(q[i] == p3){
            bribe+=2;
            ++p3;
        }
        else {cout<<"Too chaotic"<<endl;return;}  
        
    }

    cout<<bribe<<endl;
    
}