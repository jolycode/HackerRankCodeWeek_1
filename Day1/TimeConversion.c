


char* timeConversion(char* s) {
    
    static char result[9];  // Static buffer to store the result
    int hh, mm, ss;
    char period[3];

    sscanf(s, "%2d:%2d:%2d%2s", &hh, &mm, &ss, period);

    if (strcmp(period, "PM") == 0 && hh != 12) {
        hh += 12;
    } else if (strcmp(period, "AM") == 0 && hh == 12) {
        hh = 0;
    }

    snprintf(result, sizeof(result), "%02d:%02d:%02d", hh, mm, ss);
    return result;
}


/*
Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
*/