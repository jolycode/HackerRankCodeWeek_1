string caesarCipher(string s, int k) {
    string encrypted = "";

    for (char character : s) {
        if (isalpha(character)) {
            char base = islower(character) ? 'a' : 'A';
            char shifted_char = base + ((character - base + k) % 26);
            encrypted += shifted_char;
        } else {
            encrypted += character;
        }
    }

    return encrypted;
}