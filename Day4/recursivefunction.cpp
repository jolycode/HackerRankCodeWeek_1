int recursivefunction(string n){
    
    int sum=0;
    
    if(n.size() == 1){
        return n[0] - '0';
    }
    
    for (char digit : n) {
        sum += digit - '0';
    }
    
    string sumStr = to_string(sum);
    return recursivefunction(sumStr);
}

int superDigit(string n, int k) {
    int superdigit = 0;
    
    int initialSuperDigit = recursivefunction(n);

    int resultSuperDigit = initialSuperDigit * k;

    return recursivefunction(to_string(resultSuperDigit));

}