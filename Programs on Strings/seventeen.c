// Count common subsequence in two strings
#include <stdio.h>
#include <string.h>

int countCommonSubsequences(const char *str1, const char *str2) {
    int m = strlen(str1);
    int n = strlen(str2);

    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1] + dp[i - 1][j] + dp[i][j - 1];
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            }
        }
    }

    return dp[m][n];
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from user input
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Count common subsequences
    int result = countCommonSubsequences(str1, str2);

    // Output the result
    printf("Number of common subsequences: %d\n", result);

    return 0;
}
