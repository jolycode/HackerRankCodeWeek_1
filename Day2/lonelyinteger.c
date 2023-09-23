int lonelyinteger(int a_count, int* a) {
    int result = 0;

    for (int i = 0; i < a_count; i++) {
        result ^= a[i];
    }

    return result;

}


/*

Given an array of integers, where all elements but one occur twice, find the unique element.

EX
a=[1 2 3 4 3 2 1]
The unique element is 4.

*/