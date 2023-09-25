int palindromeIndex(char* s) {
    int length = strlen(s);
    int left = 0;
    int right = length - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            int i = left + 1;
            int j = right;
            int can_be_palindrome = 1;

            while (i < j) {
                if (s[i] != s[j]) {
                    can_be_palindrome = 0;
                    break;
                }
                i++;
                j--;
            }

            if (can_be_palindrome) {
                return left;
            } else {
                return right;
            }
        }
        left++;
        right--;
    }

    return -1;
}
