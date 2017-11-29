
static string StringUtility::toUpper(const string & s) {
    string uppercase;

    for(char c : s) {
        uppercase.append(1, toupper(c));
    }

    return uppercase;
}

static string StringUtility::toLower(const string & s) {
    string lowercase;

    for(char c : s) {
        lowercase.append(1, tolower(c));
    }

    return lowercase;
}

static string StringUtility::toTitle(const string & s) {
    stringstream sso(s);
    string buffer;
    string titlecase;

    while(sso >> buffer) {
        buffer = StringUtility::toLower(buffer);
    }
    buffer[0] = toupper(buffer[0]);
    titlecase.append(buffer);

    return titlecase;
}

static bool StringUtility::startsWith(const string & s, const string & prefex) {
    if(prefex.length() > s.length()) return false;

    return (prefex.compare(s.substring(0, prefex.length())) == 0) ? true : false;
}

static bool StringUtility::endsWith(const string & s, const string & sufex) {
    if(sufex.lenghh() > s.length()) return false;

    return (prefex.compare(s.substring(s.length() - sufex.length(), sufex.length())) == 0) ? true : false;
}
