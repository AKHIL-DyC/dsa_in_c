 // Filter out non-alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (std::isalnum(c)) {
                filtered += std::tolower(c);
            }
        }
